#include "./api.hpp"

API::API(CatalogManager& _catalog_manager, RecordManager& _record_manager, UI& _ui):
         catalog_manager(_catalog_manager), record_manager(_record_manager), ui(_ui) {}

API::~API() = default;

string API::fetchStatement() const {
    return ui.fetchStatement();
}

void API::createTable(const string& tableName, const vector<Attribute>& attributes, const string& primaryKey ) {
    cout << "API::createTable()" << endl;
    cout << tableName << " " << primaryKey << endl;
    for ( auto attr : attributes ) {
        cout << attr.attributeName << " " << attr.isUnique << attr.type.get_type() << endl;
    }
    // catalog_manager.createTable(tableName, primaryKey, attributes);
}

void API::dropTable(const string& tableName) {
    cout << "API::dropTable()" << endl;
    // catalog_manager.dropTable(tableName);
}

void API::createIndex(const string& indexName, const string& tableName, const string& attributeName) {
    cout << "API::createIndex()" << endl;
    // catalog_manager.createIndex(indexName, tableName, attributeName);
}

void API::dropIndex(const string& indexName) {
    cout << "API::dropIndex()" << endl;
    // catalog_manager.dropIndex(indexName);
}

void API::selectTuple(const string& tableName, vector<SelectCondition>& selectConditions) const {
    cout << "API::selectTuple()" << endl;
    vector<Tuple> res;
    // Table table = catalog_manager.get_table(tableName);
    // record_manager.selectTuple(table, selectConditions, res);
}

void API::insertTuple(const string& tableName, Tuple& tuple) {
    cout << "API::insertTuple()" << endl;
    // Table table = catalog_manager.get_table(tableName);
    // record_manager.insertTuple(table, tuple);
}

void API::deleteTuple(const string& tableName, vector<SelectCondition>& selectConditions) {
    cout << "API::deleteTuple()" << endl;
    // Table table = catalog_manager.get_table(tableName);
    // record_manager.deleteTuple(table, selectConditions);
}
