#include "recordManager.hpp"

/**
 * @prototype: RecordManager(IndexManager& _index_manager, BufferManager& _buffer_manager);
 * @function: the only needed constructor
 **/
RecordManager::RecordManager(/*IndexManager& _index_manager, */BufferManager& _buffer_manager, CatalogManager& _catalog_manager):
                             /*index_manager(_index_manager), */buffer_manager(_buffer_manager), catalog_manager(_catalog_manager) {}

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
    cout << strlen(tmpData) << endl;
    bool writeResult = writeToBuffer(table.tableName, table.rowNum, tmpData, table.rowLength);
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
    if (tupleString.size() != table.attributeNum) {
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
 * @prototype: selectTuple(const Table& table, vector<SelectCondition>& selectConditions, vector<Tuple> tuples);
 * @function: select tuple with condition and index
 **/
Result RecordManager::selectTuple(const Table& table, vector<SelectCondition>& selectConditions, vector<Tuple> tuples) {
    int conditionNum = selectConditions.size();
    for ( int i = 0; i < conditionNum; i++ )
        selectConditions[i].fillAttributeIndex(table.tableName, catalog_manager);
    vector<bool> isConditionWithIndex(conditionNum, false);
    int cntIndex = 0, cntNormal = 0;
    vector<int> idx;
    while (1) {
        int tmp = -1;
        for ( int i = 0; i < conditionNum; i++ ) {
            if ( isConditionWithIndex[i] == true )
                continue;
            if ( !(table.attributeVector[selectConditions[i].attributeIndex].isUnique) )
                continue;
            /*if ( !index_manager.isIndexExist(table.tableName, table.attributeVector[i].attributeName, table.attributeVector[i].type) )
                continue;*/
            tmp = i; // A condition's attribute with index found
            break;
        }
        if ( tmp == -1 )
            break;
        isConditionWithIndex[tmp] = true;
        if ( cntIndex == 0 ) {
            idx = selectWithIndex(table, selectConditions[tmp]);
            sort(idx.begin(), idx.end());
        }
        else {
            vector<int> tmpIdx = selectWithIndex(table, selectConditions[tmp]);
            sort(tmpIdx.begin(), tmpIdx.end());
            for ( int i = 0; i < idx.size(); i++ ) {
                // not satisfied with conditions joined
                if ( find(tmpIdx.begin(), tmpIdx.end(), idx[i]) == tmpIdx.end() ) {
                    idx.erase(idx.begin() + i);
                    i--;
                }
            }
        }
        cntIndex++;
    }
    // no index available
    if ( cntIndex == 0 ) return selectTupleWithoutIndex(table, selectConditions, tuples);
    else {
        for ( int i = 0; i < idx.size(); i++ ) {
            Tuple tmp = getTupleByRowNumber(table, idx[i]);
            tuples.push_back(tmp);
        }
    }
    while (1) {
        int tmp = -1;
        for ( int i = 0; i < conditionNum; i++ ) {
            if(isConditionWithIndex[i])
                continue;
            tmp = i;                        // a condition without index found
            break;
        }
        if ( tmp == -1 )
            break;                          // all conditions checked
        isConditionWithIndex[tmp] = true;   // mark the condition checked, although it has no index
        selectWithoutIndex(table.tableName, selectConditions[tmp], tuples);
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
        cout << "no tuple satisfies the condition" << endl;
        return 0;
    }
    vector<int> attrIndex;
    int attrNum = table.attributeNum;
    for ( int i = 0; i < attrNum; i++ ) {
        if ( !table.attributeVector[i].isUnique )
            continue;
        /*if ( index_manager.isIndexExist(table.tableName, table.attributeVector[i].attributeName, table.attributeVector[i].type) )
            attrIndex.push_back(i);*/
    }
    int deleteNum = searchResult.size();
    for ( int i = 0; i < deleteNum; i++ ) {
        Tuple tuple = searchResult[i];
        //
        // Delete tuple from file
        //
        /*for ( int j = 0; j < attrIndex.size(); j++ )
		    index_manager.deleteIndex(table.tableName, table.attributeVector[attrIndex[j]].attributeName, table.attributeVector[attrIndex[j]].type, tuple.getData()[attrIndex[j]].elementToString()); // parameters to be modified by IndexManger developer*/
    }
    table.rowNum -= deleteNum;
    return deleteNum;
}

/**
 * @prototype: selectWithoutIndex(const SelectCondition& condition, vector<Tuple>& tuples);
 * @function: select with condition and index, private member function used for selectTuple()
 **/
vector<int> RecordManager::selectWithIndex(const Table& table, SelectCondition& condition) {
    condition.fillAttributeIndex(table.tableName, catalog_manager);
    vector<int> idx; idx.clear();
    if ( condition.conditionType == EQUAL ) {
        /*index_manager.findElement(table.tableName, table.attributeVector[condition.attributeIndex].attributeName, table.attributeVector[condition.attributeIndex].type, condition.value.elementToString(), idx); // parameters to be modified by IndexManger developer*/
            if(idx[0] == -1)    // not found equal
                idx.clear();
    }
    else if ( condition.conditionType == NOT_EQUAL ) {
        int flag = -1;
        /*if(index_manager.findElement(table.tableName, table.attributeVector[condition.attributeIndex].attributeName, table.attributeVector[condition.attributeIndex].type, condition.value.elementToString(), idx) == SUCCESS) // parameters to be modified by IndexManger developer
            flag = idx[0];*/
        idx.clear();
        for(int i = 0; i < table.rowNum; i++)
            idx.push_back(i);
        if(flag != -1)          // found equal and remove it from search result
            idx.erase(find(idx.begin(), idx.end(), flag));
    }
    /*else if ( condition.conditionType == GREATER ) {
        index_manager.greater_than(table.tableName, table.attributeVector[condition.attributeIndex].attributeName, table.attributeVector[condition.attributeIndex].type, condition.value.elementToString(), idx, 0);
    }
    else if ( condition.conditionType == GREATER_EQUAL ) {
        index_manager.greater_than(table.tableName, table.attributeVector[condition.attributeIndex].attributeName, table.attributeVector[condition.attributeIndex].type, condition.value.elementToString(), idx, 1);
    }
    else if ( condition.conditionType == LESS ) {
        index_manager.less_than(table.tableName, table.attributeVector[condition.attributeIndex].attributeName, table.attributeVector[condition.attributeIndex].type, condition.value.elementToString(), idx, 0);
    }
    else if ( condition.conditionType == LESS_EQUAL ) {
        index_manager.less_than(table.tableName, table.attributeVector[condition.attributeIndex].attributeName, table.attributeVector[condition.attributeIndex].type, condition.value.elementToString(), idx, 1);
    }*/
    return idx;
}

/**
 * @prototype: selectWithoutIndex(string tableName, SelectCondition& condition, vector<Tuple>& tuples);
 * @function: select with condition without index, private member function used for selectTuple()
 **/
void RecordManager::selectWithoutIndex(string tableName, SelectCondition& condition, vector<Tuple>& tuples) {
    for(int i = 0; i < tuples.size(); i++)
        if(judgeCondition(tableName, tuples[i], condition) == false)
            tuples.erase(tuples.begin() + i);
}


bool RecordManager::writeToBuffer(string tableName, int rowNum, char* data, int rowLength) {
    fiter file = buffer_manager.getFile(tableName, 0, rowLength, rowNum);
    int block_num = buffer_manager.getBlockNums(file);
    int idx = rowNum / (block_size / rowLength);
    biter block;
    if ( block_num > idx ) {
        block = buffer_manager.getBlockbyOffset(file, idx);
        if ( block_size - (*block)->byte_offset >= rowLength )
            return (*block)->write(data, rowLength);
        char* blank = (char*)malloc((block_size - (*block)->byte_offset) * sizeof(char));
        if ( blank == NULL ) {
            cout << "RecordManager::writeToBuffer error, memory used up" << endl;
            return false;
        }
        memset(blank, 0, block_size - (*block)->byte_offset);
        if ( !(*block)->write(blank, block_size - (*block)->byte_offset) )
            return false;
    }
    biter new_block = buffer_manager.getBlock(file);
    return (*new_block)->write(data, rowLength);
}

bool RecordManager::readFromBuffer(string tableName, int rowNum, char* data, int rowLength) {
    fiter file = buffer_manager.getFile(tableName, 0, rowLength, rowNum);
    int block_num = buffer_manager.getBlockNums(file);
    int idx = rowNum / (block_size / rowLength);
    if ( block_num <= idx )
        return false;
    int offset = rowNum % (block_size / rowLength);
    biter block = buffer_manager.getBlockbyOffset(file, idx);
    strcpy(data, (*block)->data);
    memmove(data, &data[rowLength*offset], rowLength);
    // strcpy(data, (*block)->data);
    // memcpy(data, &data[rowLength*offset], rowLength);
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
    for(int i = 0; i < table.rowNum; i++) {
        Tuple tuple = getTupleByRowNumber(table, i);
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
        /*if(catalog_manager.is_index_exist(table.tableName, table.attributeVector[i].attributeName)) { // Use index to find directly
            vector<int> idx;
            idx.clear();
            if(index_manager.findElement(table.tableName, table.attributeVector[i].attributeName, table.attributeVector[i].type, tuple.getData()[i].elementToString(), idx) == SUCCESS) // parameters to be modified by IndexManger developer
                return true;
        } else { // Iteration without index*/
            for(int j = 0; j < table.rowNum; j++){
                Tuple tmpTuple = getTupleByRowNumber(table, j);
                if (tmpTuple.getData()[i] == tuple.getData()[i])
                    return true;
            }
        //}
    }
    return false;
}

Tuple RecordManager::getTupleByRowNumber(const Table& table, int rowNumber) {
    Tuple tuple;
    char* tmpData = (char*)malloc(table.rowLength * sizeof(char));
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
    condition.fillAttributeIndex(tableName, catalog_manager);
    if (condition.conditionType == LESS) {
        if (tuple.getData()[condition.attributeIndex] < condition.value)
            return true;
    } else if (condition.conditionType == LESS_EQUAL) {
        if (tuple.getData()[condition.attributeIndex] <= condition.value)
            return true;
    } else if (condition.conditionType == EQUAL) {
        if (tuple.getData()[condition.attributeIndex] == condition.value)
            return true;
    } else if (condition.conditionType == GREATER_EQUAL) {
        if (tuple.getData()[condition.attributeIndex] >= condition.value)
            return true;
    } else if (condition.conditionType == GREATER) {
        if (tuple.getData()[condition.attributeIndex] > condition.value)
            return true;
    } else if (condition.conditionType == NOT_EQUAL) {
        if (tuple.getData()[condition.attributeIndex] != condition.value)
            return true;
    }
    return false;
}

Tuple RecordManager::charToTuple(const Table& table, char* c) {
    char* original = c;
    Tuple tuple;
    int* tmp = (int*)malloc(sizeof(int));
    memmove(tmp, c, sizeof(int));
    tuple.setIndex(*tmp);
    free(tmp);
    c += sizeof(int);
    int n = table.attributeNum;
    for(int i = 0; i < n; i++) {
        Element tmpElement;
        tmpElement.setType(table.attributeVector[i].type.get_type());
        tmpElement.setLength(table.attributeVector[i].type.get_length());
        tmpElement.charToElement(c);
        tuple.push_back_Data(tmpElement);
        c += table.attributeVector[i].type.get_length();
        if(table.attributeVector[i].type.get_type() == CHAR)
            c++;
    }
    c = original;
    return tuple;
}

void RecordManager::tupleToChar(Tuple& tuple, char* c) {
    char* original = c;
    int index = tuple.getIndex();
    memmove(c, &index, sizeof(int));
    c += sizeof(int);
    int n = tuple.getData().size();
    for(int i = 0; i < n; i++) {
        tuple.getData()[i].elementToChar(c);
        c += tuple.getData()[i].length;
        if(tuple.getData()[i].type == CHAR)
            c++;
    }
    c = original;
}