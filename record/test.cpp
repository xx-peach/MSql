#include "../config.hpp"
#include "../buffer/buffer.hpp"
#include "../catalog/catalogManager.hpp"
#include "../record/recordManager.hpp"
#include "../index/index_manager.hpp"
#include <fstream>
int main()
{
    BufferManager buffer_manager;
    IndexManager index_manager(buffer_manager);
    CatalogManager catalog_manager(buffer_manager);
    RecordManager record_manager(index_manager, buffer_manager, catalog_manager);
    if(catalog_manager.initialCatalog())
        cout << "Initialize error!" << endl;
    
    string tableName = "employee";
    Table& table = catalog_manager.get_table(tableName);

    vector<pair<NumType, string>> SuZhonggen;
    SuZhonggen.push_back(make_pair(CHAR, "SuZhong"));
    SuZhonggen.push_back(make_pair(INT, "55"));
    SuZhonggen.push_back(make_pair(FLOAT, "45261.1"));
    if ( record_manager.insertTuple(table, SuZhonggen) )
        cout << "Failed to insert SuZhonggen!" << endl;

    vector<pair<NumType, string>> WuFei;
    WuFei.push_back(make_pair(CHAR, "WuFei"));
    WuFei.push_back(make_pair(INT, "42"));
    WuFei.push_back(make_pair(FLOAT, "165987.0"));
    if ( record_manager.insertTuple(table, WuFei) )
        cout << "Failed to insert WuFei!" << endl;

    cout << table.rowNum << endl;

    vector<SelectCondition> selectConditions;
    Element hundred_thousand(100000);
    SelectCondition condition("salary", LESS, hundred_thousand);
    selectConditions.push_back(condition);

    vector<Tuple> result;
    if(record_manager.selectTuple(table, selectConditions, result))
        cout << "Failed to select!" << endl;

    cout << "Number of selected tuples: " << result.size() << endl;
    for( auto it : result) {
        cout << it.getIndex() << ": " << it.getData()[0].elementToString() << "\t" << it.getData()[1].elementToString() << "\t" << it.getData()[2].elementToString() << "\t" << endl;
    }

    cout << "The whole table:" << endl;
    record_manager.printTable(table);
    
    return 0;
}