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

    vector<Element> elements1;
    string s("Alice");
    Element e1(s), e2(65), e3(12612.1f);
    elements1.push_back(e1); elements1.push_back(e2); elements1.push_back(e3);
    res.push_back(Tuple(elements1));

    vector<Element> elements2;
    string t("Bob");
    Element f1(t), f2(15), f3(761342.9f);
    elements2.push_back(f1); elements2.push_back(f2); elements2.push_back(f3);
    res.push_back(Tuple(elements2));

    vector<Element> elements3;
    string u("Alexander");
    Element g1(u), g2(28), g3(1161342.9f);
    elements3.push_back(g1); elements3.push_back(g2); elements3.push_back(g3);
    res.push_back(Tuple(elements3));
    
    // Table table = catalog_manager.get_table(tableName);
    // record_manager.selectTuple(table, selectConditions, res);
    vector<string> titles = catalog_manager.get_titles(tableName);
    ui.plotTable(res, titles);
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
