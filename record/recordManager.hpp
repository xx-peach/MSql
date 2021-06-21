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

    /* Insert using tuple or string */
    Result insertTuple(Table& table, Tuple& tuple);
    Result insertTuple(Table& table, vector<pair<NumType, string>>& tupleString);

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

    /* middle interface that write to buffer */
    bool writeToBuffer(string tableName, int rowNum, char* data, int rowLength, bool isDelete);

    /* middle interface that read data from buffer */
    bool readFromBuffer(string tableName, int rowNum, char* data, int rowLength);

    /* print the table */
    void printTable(const Table& table);

private:
    IndexManager& index_manager;
    BufferManager& buffer_manager;
    CatalogManager& catalog_manager;

    bool judgeCondition(string tableName, Tuple& tuple, SelectCondition& condition);
    bool isMatchTheAttribute(const Table& table, Tuple& tuple);
    bool isConflictTheUnique(const Table& table, Tuple& tuple);

    Tuple charToTuple(const Table& table, char* c);
    void tupleToChar(Tuple& tuple, char* c);

    Tuple getTupleByRowNumber(const Table& table, int rowNumber);
    vector<int> selectWithIndex(const Table& table, SelectCondition& condition);
    void selectWithoutIndex(string tableName, SelectCondition& condition, vector<Tuple>& tuples);
};

#endif
