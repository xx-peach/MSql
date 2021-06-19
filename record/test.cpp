#include "../config.hpp"
#include "../buffer/buffer.hpp"
#include "../catalog/catalogManager.hpp"
#include "../record/recordManager.hpp"
#include "../index/bplus_tree.hpp"
#include "../index/index_manager.hpp"
#include "../index/node.hpp"
#include <fstream>
int main()
{
    IndexManager index_manager;
    BufferManager buffer_manager;
    CatalogManager catalog_manager;
    RecordManager record_manager(index_manager, buffer_manager, catalog_manager);
    if(catalog_manager.initialCatalog())
        cout << "Initialize error!" << endl;
    
    string tableName = "employee";
    Table table = catalog_manager.get_table(tableName);

    vector<pair<NumType, string>> SuZhonggen;
    SuZhonggen.push_back(make_pair(CHAR, "SuZhong"));
    SuZhonggen.push_back(make_pair(INT, "55"));
    SuZhonggen.push_back(make_pair(FLOAT, "45261.1"));
    if ( record_manager.insertTuple(table, SuZhonggen) )
        cout << "Failed to insert SuZhonggen!" << endl;

    cout << table.rowNum << endl;
    // vector<Tuple> result;
    // if(record_manager.selectTuple(table, result))
    //     cout << "Failed to select SuZhonggen!" << endl;

    record_manager.printTable(table);
    
    return 0;
}