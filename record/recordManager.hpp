/*
 * MSql: record/recordManager.hpp 
 * 
 * This file declares RecordManager class 
 * 
 */

#ifndef __RECORD_MANAGER_H__
#define __RECORD_MANAGER_H__

#include "../config.hpp"
#include "../utils/attribute.hpp"
#include "../utils/tuple.hpp"
#include "../utils/element.hpp"
#include "../utils/selectCondition.hpp"
#include "../utils/table.hpp"
#include "../buffer/buffer.hpp"
#include "../catalog/catalogManager.hpp"
#include "../index/index_manager.hpp"

#include <string>
#include <algorithm>

class RecordManager {
public:
    /* constructor */
    RecordManager(IndexManager& index_manager, BufferManager& buffer_manager, CatalogManager& catalog_manager);
    /* destructor */
    ~RecordManager();

    /* Insert using tuple or string */
    Result insertTuple(Table& table, vector<pair<NumType, string>>& tupleString);   // the outer api
    Result insertTuple(Table& table, Tuple& tuple);                                 // the inner api

    /* Delete with or without condition */
    int deleteTuple(Table& table, vector<SelectCondition>& selectConditions);

    /* Select with condition and index */
    Result selectTuple(const Table& table, vector<SelectCondition>& selectConditions, vector<Tuple>& tuples);
    /* Select without condition */
    Result selectTuple(const Table& table, vector<Tuple>& tuples);
    /* Select on tuples without index */
    Result selectTupleWithoutIndex(const Table& table, const vector<SelectCondition>& selectConditions, vector<Tuple>& tuples);

    /* Select all values of an attribute in a table */
    Result selectAttribute(string tableName, string attributeName, vector<Element>& elements);
    /* Select the last tuple attribute in a table*/
    Result selectlastAttribute(string tableName, string attributeName, Element& element,int& table_row_num);

    /* middle interface that write data to buffer */
    bool writeToBuffer(string tableName, int rowNum, char* data, int rowLength, bool isDelete);
    /* middle interface that read data from buffer */
    bool readFromBuffer(string tableName, int rowNum, char* data, int rowLength);

    /* print the table, used for debug */
    void printTable(const Table& table);

private:
    /* three essential private member references */
    CatalogManager& catalog_manager;
    BufferManager& buffer_manager;
    IndexManager& index_manager;

    /* private member function used for where clause */
    bool judgeCondition(string tableName, Tuple& tuple, SelectCondition& condition);
    bool isMatchTheAttribute(const Table& table, Tuple& tuple);
    bool isConflictTheUnique(const Table& table, Tuple& tuple);

    /* two essential function used for readFromBuffer() and writeToBuffer() */
    Tuple charToTuple(const Table& table, char* c); // transform char array to a tuple
    void tupleToChar(Tuple& tuple, char* c);        // transform a tuple to a char array

    /* functions used for select and insert statements, to judge uniqueness */
    void selectWithoutIndex(string tableName, SelectCondition& condition, vector<Tuple>& tuples);
    vector<int> selectWithIndex(const Table& table, SelectCondition& condition);
    Tuple getTupleByRowNumber(const Table& table, int rowNumber);
};

#endif
