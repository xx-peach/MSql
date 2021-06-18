/*
 * MSql: api/api.hpp 
 * 
 * This file declares API class
 * 
 */

#ifndef _API_H_
#define _API_H_

#include "../record/recordManager.hpp"
#include "../catalog/catalogManager.hpp"
#include "../ui/ui.hpp"
#include <vector>
using namespace std;

class API {
private:
    UI& ui;
    RecordManager& record_manager;
    CatalogManager& catalog_manager;
public:
    API();
    API(CatalogManager&, RecordManager&, UI&);

    ~API();

    string fetchStatement() const;
    void createTable(const string&, const vector<Attribute>&, const string&);
    void dropTable(const string&);
    void createIndex(const string&, const string&, const string&);
    void dropIndex(const string&);
    void selectTuple(const string&, vector<SelectCondition>&) const;
    void insertTuple(const string&, Tuple&);
    void deleteTuple(const string&, vector<SelectCondition>&);
};

#endif
