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
    Result res = catalog_manager.createTable(tableName, primaryKey, attributes);
}

void API::dropTable(const string& tableName) {
    Result res = catalog_manager.dropTable(tableName);
}

void API::createIndex(const string& indexName, const string& tableName, const string& attributeName) {
    Result res1 = catalog_manager.createIndex(indexName, tableName, attributeName);
    FieldType ft = catalog_manager.getTypeByIndexName(indexName);
    Result res2 = index_manager.create_index(tableName,attributeName,ft);
}

void API::dropIndex(const string& indexName) {
    Result res = catalog_manager.dropIndex(indexName);
}

void API::selectTuple(const string& tableName, vector<SelectCondition>& selectConditions) const {
    vector<Tuple> res;
    Table table = catalog_manager.get_table(tableName);
    record_manager.selectTuple(table, selectConditions, res);
    vector<string> titles = catalog_manager.get_titles(tableName);
    ui.plotTable(res, titles);
}

void API::insertTuple(const string& tableName, vector<pair<NumType, string>>& tupleString) {
    Result res = record_manager.insertTuple(catalog_manager.get_table(tableName), tupleString);
}

void API::deleteTuple(const string& tableName, vector<SelectCondition>& selectConditions) {
    // cout << "API::deleteTuple()" << endl;
    // Table table = catalog_manager.get_table(tableName);
    // record_manager.deleteTuple(table, selectConditions);
}
