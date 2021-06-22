#include "recordManager.hpp"

/**
 * @prototype: RecordManager(IndexManager& _index_manager, BufferManager& _buffer_manager);
 * @function: the only needed constructor
 **/
RecordManager::RecordManager(IndexManager& _index_manager, BufferManager& _buffer_manager, CatalogManager& _catalog_manager):
                             index_manager(_index_manager), buffer_manager(_buffer_manager), catalog_manager(_catalog_manager) {}

/**
 * @prototype: ~RecordManager();
 * @function: the default destructor
 **/
RecordManager::~RecordManager() = default;

/**
 * @prototype: insertTuple(Table& table, Tuple& tuple);
 * @function: insert a tuple into the table
 **/
Result RecordManager::insertTuple(Table& table, Tuple& tuple) {
    if ( isMatchTheAttribute(table, tuple) == false ) {
        cout << "RecordManager::insertTuple error, tuple attributes do not match the table" << endl;
        return NO_SUCH_ATTR;
    }
    if ( isConflictTheUnique(table, tuple) == true ) {
        cout << "RecordManager::insertTuple error, unique conflict" << endl;
        return UNIQUE_CONFLICT;
    }
    char* tmpData = (char*)malloc(table.rowLength * sizeof(char));
    if ( tmpData == NULL ) {
        cout << "RecordManager::insertTuple error, memory used up" << endl;
        return ERROR;
    }
    tupleToChar(tuple, tmpData);
    bool writeResult = writeToBuffer(table.tableName, table.rowNum, tmpData, table.rowLength, false);
    free(tmpData);
    if ( writeResult == false ) {
        cout << "RecordManager::insertTuple error, write to buffer fail" << endl;
        return ERROR;
    }
    table.rowNum++;
    return SUCCESS;
}

/**
 * @prototype: insertTuple(Table& table, vector<pair<NumType, string>>& tupleString);
 * @function: insert a tuple into the table, can call the insertTuple above
 **/
Result RecordManager::insertTuple(Table& table, vector<pair<NumType, string>>& tupleString) {
    if ( tupleString.size() != table.attributeNum ) {
        cout << "RecordManager::insertTuple error, tuple attributes do not match the table" << endl;
        return ATTR_NUM_NOT_MATCH;
    }
    Tuple tuple;
    tuple.setIndex(table.rowNum);    // Insert to the bottom of the table
    for ( int i = 0; i < table.attributeNum; i++ ) {
        if ( table.attributeVector[i].type.get_type() == FLOAT && tupleString[i].first == INT ) {
            tupleString[i].first = FLOAT;
            tupleString[i].second += ".0";
        }
        if ( table.attributeVector[i].type.get_type() != tupleString[i].first ) {
            cout << "RecordManager::insertTuple error, tuple attributes do not match the table" << endl;
            return NO_SUCH_ATTR;
        }
        Element e;
        e.setType(table.attributeVector[i].type.get_type());
        e.setLength(table.attributeVector[i].type.get_length());
        if ( e.type == INT )
            e.setData(stoi(tupleString[i].second));
        else if ( e.type == FLOAT )
            e.setData(stof(tupleString[i].second));
        else 
            e.setData(tupleString[i].second);
        tuple.push_back_Data(e);
    }
    return insertTuple(table, tuple); 
}

/**
 * @prototype: selectTuple(const Table& table, vector<Tuple>& tuples);
 * @function: select tuple without any conditions
 **/
Result RecordManager::selectTuple(const Table& table, vector<Tuple>& tuples) {
    for ( int i = 0; i < table.rowNum; i++ ) {
        Tuple tmp = getTupleByRowNumber(table, i);
        if ( tmp.isDeleted() )
            continue;
        tuples.push_back(tmp);
    }
    return SUCCESS;
}

/**
 * @prototype: selectTuple(const Table& table, vector<Tuple>& tuples);
 * @function: select tuple with condition but without index
 **/
Result RecordManager::selectTupleWithoutIndex(const Table& table, const vector<SelectCondition>& selectConditions, vector<Tuple>& tuples) {
    for ( int i = 0; i < table.rowNum; i++ ) {
        Tuple tmp = getTupleByRowNumber(table, i);
        if ( tmp.isDeleted() )
            continue;
        bool valid = true;
        for ( auto it : selectConditions ) {
            if ( judgeCondition(table.tableName, tmp, it) == false ) {
                valid = false;
                break;
            }
        }
        if ( valid ) tuples.push_back(tmp);
    }
    return SUCCESS;
}

/**
 * @prototype: selectTuple(const Table& table, vector<SelectCondition>& selectConditions, vector<Tuple>& tuples);
 * @function: select tuple with condition and index
 **/
Result RecordManager::selectTuple(const Table& table, vector<SelectCondition>& selectConditions, vector<Tuple>& tuples) {
    if(selectConditions.size() == 0)
        return selectTuple(table, tuples);
    int conditionNum = selectConditions.size();
    for ( int i = 0; i < conditionNum; i++ ) {
        selectConditions[i].fillAttributeIndex(table.tableName, catalog_manager);
        if(table.attributeVector[selectConditions[i].attributeIndex].type.get_type() == FLOAT && selectConditions[i].value.type == INT)
            selectConditions[i].value.setType(FLOAT);
    }
    vector<bool> isConditionWithIndex(conditionNum, false);
    int cntIndex = 0;
    vector<int> idx;
    for ( int i = 0; i < conditionNum; i++ ) {
        if ( !(table.attributeVector[selectConditions[i].attributeIndex].isUnique) )
            continue;
        if ( !catalog_manager.is_index_exist(table.tableName, table.attributeVector[selectConditions[i].attributeIndex].attributeName) )
            continue;
        isConditionWithIndex[i] = true;
        if ( cntIndex++ == 0 ) {
            idx = selectWithIndex(table, selectConditions[i]);
            sort(idx.begin(), idx.end());
        }
        else {
            vector<int> tmpIdx = selectWithIndex(table, selectConditions[i]);
            sort(tmpIdx.begin(), tmpIdx.end());
            for ( int j = 0; j < idx.size(); j++ ) {
                // not satisfied with conditions joined
                if ( find(tmpIdx.begin(), tmpIdx.end(), idx[j]) == tmpIdx.end() ) {
                    idx.erase(idx.begin() + j);
                    j--;
                }
            }
        }
    }
    // no index available
    if ( cntIndex == 0 ) return selectTupleWithoutIndex(table, selectConditions, tuples);
    else {
        for ( int i = 0; i < idx.size(); i++ ) {
            Tuple tmp = getTupleByRowNumber(table, idx[i]);
            if ( tmp.isDeleted() )
                continue;
            tuples.push_back(tmp);
        }
    }
    for ( int i = 0; i < conditionNum; i++ ) {
        if( isConditionWithIndex[i] )
            continue;
        selectWithoutIndex(table.tableName, selectConditions[i], tuples);
    }
    return SUCCESS;
}

/**
 * @prototype: deleteTuple(Table& table, vector<SelectCondition> selectConditions);
 * @function: delete tuple with or without conditions
 **/
int RecordManager::deleteTuple(Table& table, vector<SelectCondition>& selectConditions) {
    vector<Tuple> searchResult;
    Result r = selectTuple(table, selectConditions, searchResult);
    if ( r < 0 ) {
        cout << "RecordManager::deleteTuple error, select tuple fail" << endl;
        return ERROR;
    }
    if ( searchResult.size() == 0 ) {
        cout << "No tuple satisfies the condition" << endl;
        return 0;
    }
    vector<int> attrIndex;
    int attrNum = table.attributeNum;
    for ( int i = 0; i < attrNum; i++ ) {
        if ( !table.attributeVector[i].isUnique )
            continue;
        if ( catalog_manager.is_index_exist(table.tableName, table.attributeVector[i].attributeName) )
            attrIndex.push_back(i);
    }
    int deleteNum = searchResult.size();
    for ( int i = 0; i < deleteNum; i++ ) {
        Tuple tuple = searchResult[i];
        if ( tuple.isDeleted() ) {
            cout << "The tuple is already deleted." << endl;
            deleteNum--;
            continue;
        }
        char* tmpData = (char*)malloc(table.rowLength * sizeof(char));
        if ( tmpData == NULL ) {
            cout << "RecordManager::insertTuple error, memory used up" << endl;
            return ERROR;
        }
        readFromBuffer(table.tableName, tuple.getIndex(), tmpData, table.rowLength);
        if ( tmpData[0] == '0' ) {
            cout << "The tuple is already deleted." << endl;
            deleteNum--;
            free(tmpData);
            continue;
        }
        tmpData[0] = '0';
        bool writeResult = writeToBuffer(table.tableName, tuple.getIndex(), tmpData, table.rowLength, true);
        free(tmpData);
        if ( writeResult == false ) {
            cout << "RecordManager::deleteTuple error, write to buffer fail" << endl;
            return -1;
        }
        for ( int j = 0; j < attrIndex.size(); j++ )
		    index_manager.delete_index(table.tableName, table.attributeVector[attrIndex[j]].attributeName, table.attributeVector[attrIndex[j]].type, tuple.getData()[attrIndex[j]].elementToString());
    }
    return deleteNum;
}

/**
 * @prototype: selectWithoutIndex(const SelectCondition& condition, vector<Tuple>& tuples);
 * @function: select with condition and index, private member function used for selectTuple()
 **/
vector<int> RecordManager::selectWithIndex(const Table& table, SelectCondition& condition) {
    condition.fillAttributeIndex(table.tableName, catalog_manager);
    vector<int> idx;
    idx.clear();
    string value_str = condition.value.elementToString();
    char* con_value = (char*)value_str.c_str();
    index_manager.compare(table.tableName, table.attributeVector[condition.attributeIndex].attributeName, table.attributeVector[condition.attributeIndex].type, con_value, idx, condition.conditionType);
    return idx;
}

/**
 * @prototype: selectWithoutIndex(string tableName, SelectCondition& condition, vector<Tuple>& tuples);
 * @function: select with condition without index, private member function used for selectTuple()
 **/
void RecordManager::selectWithoutIndex(string tableName, SelectCondition& condition, vector<Tuple>& tuples) {
    for(int i = 0; i < tuples.size(); i++)
        if(judgeCondition(tableName, tuples[i], condition) == false)
            tuples.erase(tuples.begin() + i--);
}

/**
 * @prototype: selectAttribute(string tableName, string attributeName, vector<Element> elements);
 * @function: select all values of an attribute in a table
 **/
Result RecordManager::selectAttribute(string tableName, string attributeName, vector<Element>& elements) {
    int attributeIndex = catalog_manager.get_attribute_index(tableName, attributeName);
    Table table = catalog_manager.get_table(tableName);
    for ( int i = 0; i < table.rowNum; i++ ) {
        Tuple tmp = getTupleByRowNumber(table, i);
        if ( tmp.isDeleted() )
            continue;
        elements.push_back(tmp.getData()[attributeIndex]);
    }
    return SUCCESS;
}

/**
 * @prototype: selectAttribute(string tableName, string attributeName, vector<Element> elements);
 * @function: select the last values of an attribute in a table
 **/
Result RecordManager::selectlastAttribute(string tableName, string attributeName, Element& element, int& table_row_num) {
    int attributeIndex = catalog_manager.get_attribute_index(tableName, attributeName);
    Table table = catalog_manager.get_table(tableName);
    Tuple tmp = getTupleByRowNumber(table, table.rowNum-1);//last one tuple
    element = tmp.getData()[attributeIndex];
    table_row_num = table.rowNum;
    return SUCCESS;
}

bool RecordManager::writeToBuffer(string tableName, int rowNum, char* data, int rowLength, bool isDelete) {
    fiter file = buffer_manager.getFile(tableName, 0, rowLength, rowNum);
    int idx = rowNum / (block_size / rowLength);
    int offset = rowNum % (block_size / rowLength);
    biter block;
    while ( buffer_manager.getBlockNums(file) <= idx ) {
        block = buffer_manager.getBlock(file);
        (*block)->read();
    }
    block = buffer_manager.getBlockbyOffset(file, idx);
    if ( (*block)->byte_offset == 0 && idx > 0 ) {
        biter full_block = buffer_manager.getBlockbyOffset(file, idx-1);
        char* blank = (char*)malloc((block_size - (*full_block)->byte_offset) * sizeof(char));
        if ( blank == NULL ) {
            cout << "RecordManager::writeToBuffer error, memory used up" << endl;
            return false;
        }
        memset(blank, 0, block_size - (*full_block)->byte_offset);
        if ( !(*full_block)->write(blank, block_size - (*full_block)->byte_offset) ) {
            // cout << "here: " << block_size - (*full_block)->byte_offset << endl;
            return false;
        }
        free(blank);
    }
    if ( isDelete ) {
        memmove(&((*block)->data[offset*rowLength]), data, rowLength);
        (*block)->block_dirty_bit = 1;
        return true;;
    }
    else
        return (*block)->write(data, rowLength);
}

bool RecordManager::readFromBuffer(string tableName, int rowNum, char* data, int rowLength) {
    fiter file = buffer_manager.getFile(tableName, 0, rowLength, rowNum);
    int idx = rowNum / (block_size / rowLength);
    while ( buffer_manager.getBlockNums(file) <= idx ) {
        biter new_block = buffer_manager.getBlock(file);
        (*new_block)->read();
    }
    int offset = rowNum % (block_size / rowLength);
    biter block = buffer_manager.getBlockbyOffset(file, idx);
    memmove(data, &((*block)->data[offset*rowLength]), rowLength);
    return true;
}

void RecordManager::printTable(const Table& table) {
    for(int i = 0; i < table.attributeVector.size(); i++) {
        cout << table.attributeVector[i].attributeName << "\t";
    }
    cout << endl;
    char* tmpChar = (char*)malloc(table.rowLength * sizeof(char));
    if(tmpChar == NULL) {
        cout << "RecordManager::printTable error, memory used up" << endl;
        return;
    }
    // cout << table.rowNum << endl;
    for(int i = 0; i < table.rowNum; i++) {
        Tuple tuple = getTupleByRowNumber(table, i);
        if ( tuple.isDeleted() )
            continue;
        for (int j = 0; j < tuple.getData().size(); j++) {
            tuple.getData()[j].printElement();
            cout << "\t";
        }
        cout << endl;
    }
    free(tmpChar);
}

bool RecordManager::isMatchTheAttribute(const Table& table, Tuple& tuple) {
    vector<Element> data = tuple.getData();
    if (data.size() != table.attributeNum) {
        cout << "RecordManager::isMatchTheAttribute error, attribute number not match" << endl;
        return false;
    }
    for (int i = 0; i < data.size(); ++i) {
        if (data[i].type != table.attributeVector[i].type.get_type()) {
            cout << "RecordManager::isMatchTheAttribute error, attribute type not match" << endl;
            return false;
        }
    }
    return true;
}

bool RecordManager::isConflictTheUnique(const Table& table, Tuple& tuple) {
    int attrNum = table.attributeNum;
    for(int i = 0; i < attrNum; i++){
        if(!table.attributeVector[i].isUnique)
            continue;
        if(catalog_manager.is_index_exist(table.tableName, table.attributeVector[i].attributeName)) { // Use index to find directly
            vector<int> idx;
            idx.clear();
            string value_str = tuple.getData()[i].elementToString();
            char* value = (char*)value_str.c_str();
            if(index_manager.find_element(table.tableName, table.attributeVector[i].attributeName, table.attributeVector[i].type, value, idx) == SUCCESS)
                return true;
        } else { // Iteration without index
            for(int j = 0; j < table.rowNum; j++){
                Tuple tmpTuple = getTupleByRowNumber(table, j);
                if ( tmpTuple.isDeleted() )
                    continue;
                if (tmpTuple.getData()[i] == tuple.getData()[i])
                    return true;
             }
        }
    }
    return false;
}

Tuple RecordManager::getTupleByRowNumber(const Table& table, int rowNumber) {
    Tuple tuple;
    char* tmpData = (char*)malloc(table.rowLength*sizeof(char));
    if (tmpData == NULL) {
        cout << "RecordManager::getTupleByRowNumber error, memory used up" << endl;
        return tuple;
    }
    readFromBuffer(table.tableName, rowNumber, tmpData, table.rowLength);
    Tuple tmpTuple = charToTuple(table, tmpData);
    free(tmpData);
    return tmpTuple;
}

bool RecordManager::judgeCondition(string tableName, Tuple& tuple, SelectCondition& condition) {
    if ( tuple.isDeleted() )
        return false;
    condition.fillAttributeIndex(tableName, catalog_manager);
    if ( condition.conditionType == LESS ) {
        if ( tuple.getData()[condition.attributeIndex] < condition.value) 
            return true;
    } else if (condition.conditionType == LESS_EQUAL) {
        if ( tuple.getData()[condition.attributeIndex] <= condition.value )
            return true;
    } else if ( condition.conditionType == EQUAL ) {
        if ( tuple.getData()[condition.attributeIndex] == condition.value )
            return true;
    } else if ( condition.conditionType == GREATER_EQUAL ) {
        if ( tuple.getData()[condition.attributeIndex] >= condition.value )
            return true;
    } else if ( condition.conditionType == GREATER ) {
        if ( tuple.getData()[condition.attributeIndex] > condition.value )
            return true;
    } else if (condition.conditionType == NOT_EQUAL ) {
        if ( tuple.getData()[condition.attributeIndex] != condition.value )
            return true;
    }
    return false;
}

Tuple RecordManager::charToTuple(const Table& table, char* c) {
    Tuple tuple;
    char* original = c;
    // get tuple status
    if ( c[0] == '0' )
        tuple.setDeleted(true);
    else if ( c[0] == '1' )
        tuple.setDeleted(false);
    else {
        cout << "charToTuple error!" << endl;
        return tuple;
    }
    c += sizeof(char);
    // get the row index
    int* tmp = (int*)malloc(sizeof(int));
    memmove(tmp, c, sizeof(int));
    tuple.setIndex(*tmp);
    free(tmp);
    // get all the attributes of the tuple
    c += sizeof(int);
    int n = table.attributeNum;
    for ( int i = 0; i < n; i++ ) {
        Element tmpElement;
        tmpElement.setType(table.attributeVector[i].type.get_type());       // set element type
        tmpElement.setLength(table.attributeVector[i].type.get_length());   // set element length
        tmpElement.charToElement(c);                                        // set element true data
        tuple.push_back_Data(tmpElement);
        c += tmpElement.length;                    // update pointer position
    }
    // recover to original pointer
    c = original;
    // return tuple
    return tuple;
}

void RecordManager::tupleToChar(Tuple& tuple, char* c) {
    char* original = c;
    // store the tuple status first
    if ( tuple.isDeleted() )
        c[0] = '0';
    else
        c[0] = '1';
    c += sizeof(char);
    // store the tuple index next
    int index = tuple.getIndex();
    memmove(c, &index, sizeof(int));
    // store all the attributes of the tuple
    c += sizeof(int);
    int n = tuple.getData().size();
    for ( int i = 0; i < n; i++ ) {
        tuple.getData()[i].elementToChar(c);    // transfer the element data to char
        c += tuple.getData()[i].length;         // update pointer position
    }
    // recover to original pointer
    c = original;
}