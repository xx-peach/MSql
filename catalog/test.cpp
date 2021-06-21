#include "../config.hpp"
#include "../buffer/buffer.hpp"
#include "../catalog/catalogManager.hpp"
#include "../merror.hpp"

int main()
{   try {
        BufferManager buffer_manager;
        CatalogManager catalog_manager(buffer_manager);
        vector<Attribute> attrList;
        Attribute name("name", CHAR, 10, true);
        Attribute age("age", INT, false);
        Attribute salary("salary", FLOAT, false);
        attrList.push_back(name);
        attrList.push_back(age);
        attrList.push_back(salary);
        Table employee("employee", "name", attrList);
        attrList.clear();
        Attribute id("ID", CHAR, 10, true);
        attrList.push_back(id);
        Table students("students", "id", attrList);
        if(catalog_manager.initialCatalog())
            cout << "Initialize error!" << endl;
        
        if(catalog_manager.createTable(employee))
            cout << "Failed to create employee!" << endl;
        if(!catalog_manager.createTable(students))
            cout << "Create students successfully!" << endl;
        if(catalog_manager.createIndex("idx_name", "students", "name"))
            cout << "Failed to create idx_name!" << endl;
        if(!catalog_manager.createIndex("idx_name", "employee", "name"))
            cout << "Create idx_name Successfully!" << endl;
        if(!catalog_manager.createIndex("idx_id", "students", "ID"))
            cout << "Create idx_id successfully!" << endl;
        
        // if(catalog_manager.dropIndex("idx_ID"))
        //     cout << "Failed to drop idx_ID!" << endl;
        // if(!catalog_manager.dropIndex("idx_id"))
        //     cout << "Drop idx_id successfully!" << endl;
        // if(catalog_manager.dropTable("emplyee"))
        //     cout << "Failed to drop emplyee!" << endl;
        // if(!catalog_manager.dropTable("employee"))
        //     cout << "Drop employee successfully!" << endl;
        // if(catalog_manager.dropTable("employee"))
        //     cout << "Failed to drop employee!" << endl;
        
        catalog_manager.show_catalog();
        if(catalog_manager.storeCatalog())
            cout << "Store error!" << endl;
    } catch(MError& e) {
        e.diagnostic();
    }
    return 0;
}