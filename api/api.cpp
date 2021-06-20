#include "./api.hpp"
#include <fstream>

API::API(CatalogManager& _catalog_manager, RecordManager& _record_manager, IndexManager& _index_manager, UI& _ui):
         catalog_manager(_catalog_manager), record_manager(_record_manager),index_manager(_index_manager), ui(_ui) {}

API::~API() = default;

string API::fetchStatement() const {
    return ui.fetchStatement();
}

vector<string> API::fetchFile(const string& fileName) const {
    vector <string> ret;
    ifstream inFile(TEST_DIR + fileName);
    if ( inFile.is_open() ) {
        string t;
        while ( getline(inFile, t) ) {
            ret.push_back(t.substr(0, t.size()-1));
        }
        inFile.close();
        return ret;
    }
    else {
        throw MError(API_FILE_OPEN_FAIL);
    }
}

void API::createTable(const string& tableName, const vector<Attribute>& attributes, const string& primaryKey ) {
    // cout << "tableName: " << tableName << ", primary key: " << primaryKey << endl;
    // for ( int i = 0; i < attributes.size(); i++ ) {
    //     cout << attributes[i].attributeName << ", " << attributes[i].type.get_type() << ", " << attributes[i].isUnique << endl;
    // }
    Result res = catalog_manager.createTable(tableName, primaryKey, attributes);
}

void API::dropTable(const string& tableName) {
    Result res = catalog_manager.dropTable(tableName);
}

void API::createIndex(const string& indexName, const string& tableName, const string& attributeName) {
    Result res1 = catalog_manager.createIndex(indexName, tableName, attributeName);
    FieldType type = catalog_manager.getTypeByIndexName(indexName);
    Result res2 = index_manager.create_index(tableName,attributeName,type);
    //insert all the tuples with indexs
    vector<Element> elements;
    string data;
    int offset;
    if(catalog_manager.is_unique(tableName,attributeName)){
        record_manager.selectAttribute(tableName, attributeName, elements);
        for(int i=0; i < elements.size(); i++){//all the elements
            data= elements[i].elementToString();
            offset = i/(block_size/(catalog_manager.get_row_length(tableName)));//get block_index
            index_manager.insert_index(tableName,attributeName,type,data,offset);
        }
    }else{
        cout << "create index error! attribute " + attributeName + " is not unique\n";
    }
    
}

void API::dropIndex(const string& indexName) {
    string tableName = catalog_manager.getTableNameByIndexName(indexName);//in catalog drop
    string attributeName =  catalog_manager.getAttrNameByIndexName(indexName);
    FieldType type = catalog_manager.getTypeByIndexName(indexName);
    Result res = catalog_manager.dropIndex(indexName);
    Result ires = index_manager.drop_index(tableName,attributeName,type);//in index drop
}

void API::selectTuple(const string& tableName, vector<SelectCondition>& selectConditions, vector<string>& selectAttrs) const {
    // cout << "tableName: " << tableName << endl;
    // for ( int i = 0; i < selectConditions.size(); i++ ) {
    //     cout << selectConditions[i].attributeName << endl;
    // }
    // for ( int i = 0; i < selectAttrs.size(); i++ ) {
    //     cout << "project attribute " << i << ": " << selectAttrs[i] << endl;
    // }
    vector<Tuple> res;
    Table table = catalog_manager.get_table(tableName);
    record_manager.selectTuple(table, selectConditions, res);
    // select the specific attributes' indices for output
    vector<int> attrIndexs;
    int size = selectAttrs.size();
    if ( size == 1 && selectAttrs[0] == "*" ) attrIndexs.push_back(-1);
    else {
        for ( int i = 0; i < size; i++ ) {
            int idx = catalog_manager.get_attribute_index(tableName, selectAttrs[i]);
            if ( idx == -1 ) throw MError(ATTRI_NAME_NOEXSIT);
            else attrIndexs.push_back(idx);
        }
    }
    // select the arrtibute name
    vector<string> titles = catalog_manager.get_titles(tableName);
    ui.plotTable(res, titles, attrIndexs);
}

void API::insertTuple(const string& tableName, vector<pair<NumType, string>>& tupleString) {
    Result res = record_manager.insertTuple(catalog_manager.get_table(tableName), tupleString);
}

void API::deleteTuple(const string& tableName, vector<SelectCondition>& selectConditions) {
    // cout << "API::deleteTuple()" << endl;
    // Table table = catalog_manager.get_table(tableName);
    // record_manager.deleteTuple(table, selectConditions);
}
