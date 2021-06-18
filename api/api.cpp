#include "./api.hpp"

API::API(CatalogManager& _catalog_manager, RecordManager& _record_manager, UI& _ui):
         catalog_manager(_catalog_manager), record_manager(_record_manager), ui(_ui) {}

API::~API() = default;

string API::fetchStatement() const {
    return ui.fetchStatement();
}

void API::createTable(const string& tableName, const vector<Attribute>& attributes, const string& primaryKey ) {
    // cout << "API::createTable()" << endl;
    // cout << tableName << " " << primaryKey << endl;
    // for ( auto attr : attributes ) {
    //     cout << attr.attributeName << " " << attr.isUnique << attr.type.get_type() << endl;
    // }
    Result res = catalog_manager.createTable(tableName, primaryKey, attributes);
    if ( res == TABLE_NAME_EXSITED ) {
        cout << "createTable error, " << tableName << " already exists" << endl;
    }
}

void API::dropTable(const string& tableName) {
    Result res = catalog_manager.dropTable(tableName);
    if ( res == TABLE_NAME_NOEXSIT ) {
        cout << "dropTable error, " << tableName << " not exists" << endl;
    }
}

void API::createIndex(const string& indexName, const string& tableName, const string& attributeName) {
    Result res = catalog_manager.createIndex(indexName, tableName, attributeName);
    if ( res == INDEX_NAME_EXSITED ) {
        cout << "createIndex error, " << indexName << " already exists" << endl;
    }
    else if ( res == TABLE_NAME_NOEXSIT ) {
        cout << "createIndex error, " << tableName << " table name not exist" << endl;
    }
    else if ( res == ATTRI_NAME_NOEXSIT ) {
        cout << "createIndex error, " << attributeName << " attribute name not exist" << endl;
    }
    else if ( res == ATTRI_NOT_UNIQUE ) {
        cout << "createIndex error, " << attributeName << " attribute name not unique" << endl;
    }
}

void API::dropIndex(const string& indexName) {
    Result res = catalog_manager.dropIndex(indexName);
    if ( INDEX_NAME_NOEXIST ) {
        cout << "dropIndex error, " << indexName << " not exists" << endl;
    }
}

void API::selectTuple(const string& tableName, vector<SelectCondition>& selectConditions) const {
    vector<Tuple> res;
    // vector<Element> elements1;
    // string s("Alice");
    // Element e1(s), e2(65), e3(12612.1f);
    // elements1.push_back(e1); elements1.push_back(e2); elements1.push_back(e3);
    // res.push_back(Tuple(elements1));

    // vector<Element> elements2;
    // string t("Bob");
    // Element f1(t), f2(15), f3(761342.9f);
    // elements2.push_back(f1); elements2.push_back(f2); elements2.push_back(f3);
    // res.push_back(Tuple(elements2));

    // vector<Element> elements3;
    // string u("Alexander");
    // Element g1(u), g2(28), g3(1161342.9f);
    // elements3.push_back(g1); elements3.push_back(g2); elements3.push_back(g3);
    // res.push_back(Tuple(elements3));
    
    Table table = catalog_manager.get_table(tableName);
    record_manager.selectTuple(table, selectConditions, res);
    vector<string> titles = catalog_manager.get_titles(tableName);
    ui.plotTable(res, titles);
}

void API::insertTuple(const string& tableName, Tuple& tuple) {
    // cout << "API::insertTuple()" << endl;
    // cout << tuple.getData().size() << endl;
    // for ( int i = 0; i < tuple.getData().size(); i++ ) {
    //     tuple.getData()[i].printElement();
    //     cout << "\t" << tuple.getData()[i].type << "\t" << tuple.getData()[i].length << endl;
    // }
    Table table = catalog_manager.get_table(tableName);
    Result res = record_manager.insertTuple(table, tuple);
}

void API::deleteTuple(const string& tableName, vector<SelectCondition>& selectConditions) {
    // cout << "API::deleteTuple()" << endl;
    // Table table = catalog_manager.get_table(tableName);
    // record_manager.deleteTuple(table, selectConditions);
}
