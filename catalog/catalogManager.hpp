#ifndef __CATALOG_MANAGER_H__
#define __CATALOG_MANAGER_H__

#include "../config.hpp"
#include "../utils/tuple.hpp"
#include "../utils/table.hpp"
#include "../utils/attribute.hpp"
#include "../utils/fieldType.hpp"
#include "../utils/index.hpp"
// #include "../IndexManager/IndexManager.hpp"

#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

/* Including:
	- Definition of tables, including name, number of attributes, primary key, index
	- Definition of attributes, including fieldtypes, uniqueness
	- Definition of index, including name, table, attribute
*/

struct tableAttrName {
	string attributeName;
	string tableName;
};

class CatalogManager {
private:
	map<string, Table> tables;
	map<string, Index> indexes;
	map<string, string> table_attrToIndex;
	string tableFileName = CAT_TABLE;
	string indexFileName = CAT_INDEX;

	/* initialize the tables, read table information from file table.cat */
	Result initialTable() {
		ifstream file;
		file.open(tableFileName, ios::in);
		if ( !file.is_open() ) {
			cout << "CatalogManager::initialTable error, open file " << tableFileName << " fail" << endl;
			// file.close();
			return TABLE_CATALOG_FILE_READ_ERROR;
		}
		else {
			string tmpTableName, tmpPrimaryKey;
			int tmpIndexNum, tmpAttributeNum, tmpRowNum;
			/* begin to initial the table using the read data */
			while ( !file.eof() ) {
				vector<Attribute> tmpAttributeVector;
				vector<Index> tmpIndexVector;
				// read in the statistical data of the table
				file >> tmpTableName >> tmpPrimaryKey >> tmpRowNum >> tmpAttributeNum;
				// read in every attribute information of the table
				for ( int i = 0; i < tmpAttributeNum; i++ ) {
					int tmpLength;		// attribute length
					bool tmpIsUnique;	// attribute uniqueness
					NumType tmpNumType;	// attribute type
					string tmpAttributeName, tmpType;
					// read in the statistical data of the attributes
					file >> tmpAttributeName >> tmpType >> tmpLength >> tmpIsUnique;
					if ( tmpType == "CHAR" )
                        tmpNumType = CHAR;
					else if ( tmpType == "FLOAT" )
                        tmpNumType = FLOAT;
					else if ( tmpType == "INT" )
                        tmpNumType = INT;
					Attribute tmpAttribute(tmpAttributeName, tmpNumType, tmpLength, tmpIsUnique);
					tmpAttributeVector.push_back(tmpAttribute);
				}
				// read in the total number of indexes in the table
				file >> tmpIndexNum;
				// read in every index information of the table
				for(int i = 0; i < tmpIndexNum; i++) {
					string tmpIndexName, tmpAttributeName;
					file >> tmpIndexName >> tmpAttributeName;
					Index tmpIndex(tmpIndexName, tmpTableName, tmpAttributeName);
					tmpIndexVector.push_back(tmpIndex);
				}
				// instantiation a table object
				Table tmpTable(tmpTableName, tmpPrimaryKey, tmpAttributeVector, tmpIndexVector, tmpRowNum);
				// add the new table into the tables map
				tables.insert(make_pair(tmpTableName, tmpTable));
			}
			file.close();
			return SUCCESS;
		}
	}

	/* initialize the indexes, read index information from file index.cat */
	Result initialIndex() {
		ifstream file;
		file.open(indexFileName, ios::in);
		if ( !file.is_open() ) {
			cout << "CatalogManager::initialIndex error, open file" << indexFileName << " fail" << endl;
			// file.close();
			return INDEX_CATALOG_FILE_READ_ERROR;
		}
		else {
			int tmpBlockNum, tmpRootNum;
			string tmpIndexName, tmpTableName, tmpAttributeName;
			/* begin to initial the index using the read data */
			while ( !file.eof() ) {
				// read in the statistical data
				file >> tmpIndexName >> tmpTableName >> tmpAttributeName >> tmpBlockNum >> tmpRootNum;
				if ( tmpIndexName == "")
					continue;
				// instantiation a Index object
				Index tmpIndex(tmpIndexName, tmpTableName, tmpAttributeName, tmpBlockNum, tmpRootNum);
				// add the new index into the indexes map
				indexes.insert(make_pair(tmpIndexName, tmpIndex));
				table_attrToIndex.insert(make_pair(tmpIndex.tableName + " " + tmpIndex.attributeName, tmpIndex.indexName));
			}
			file.close();
			return SUCCESS;
		}
	}

	/* store the tables to table.cat */
	Result storeTable() {
		ofstream file;
		file.open(tableFileName, ios::out | ios::trunc);
		if ( !file.is_open() ) {
			cout << "CatalogManager::storeTable error, open file " << tableFileName << " fail" << endl;
			// file.close();
			return TABLE_CATALOG_FILE_WRITE_ERROR;
		}
		else {
			Table tmpTable;
			for ( auto it : tables ) {
				tmpTable = it.second;
				file << tmpTable.tableName << " ";
				file << tmpTable.primaryKey << " ";
				file << tmpTable.rowNum << " ";
                file << tmpTable.attributeNum << endl;
				for ( int i = 0; i < tmpTable.attributeNum; i++ ) {
					Attribute tmpAttribute = tmpTable.attributeVector.at(i);
					file << left << setw(15) << tmpAttribute.attributeName;
					NumType temp_type = tmpAttribute.type.get_type();
					string s;
					switch(temp_type) {
					case CHAR:
						s = "CHAR";
						break;
					case INT:
						s = "INT";
						break;
					case FLOAT:
						s = "FLOAT";
						break;
					}
					file << left << setw(7) << s;
					file << left << setw(5) << tmpAttribute.type.get_length();
					file << setw(2) << tmpAttribute.isUnique << endl;
				}
				file << tmpTable.indexNum << endl;
				for ( int i = 0; i < tmpTable.indexNum; i++ ) {
					Index tmpIndex = tmpTable.indexVector.at(i);
					file << left << setw(15) << tmpIndex.indexName;
					file << left << setw(15) << tmpIndex.attributeName << endl << endl;
				}
			}
			file.close();
			return SUCCESS;
		}
	}

	/* store the indexes to index.cat */
	Result storeIndex() {
		ofstream file;
		file.open(indexFileName, ios::out | ios::trunc);
		if ( !file.is_open() ) {
			cout << "CatalogManager::storeIndex, open file " << indexFileName << " fail" << endl;
			// file.close();
			return INDEX_CATALOG_FILE_WRITE_ERROR;
		}
		else {
			Index tmpIndex;
			for ( auto it : indexes ) {
				tmpIndex = it.second;	
				file << left << setw(15) << tmpIndex.indexName;
				file << left << setw(15) << tmpIndex.tableName;
				file << left << setw(15) << tmpIndex.attributeName;
				file << left << setw(5) << tmpIndex.blockNum;
				file << left << setw(5) << tmpIndex.rootNum << endl;
			}
			file.close();
			return SUCCESS;
		}
	}
	
public:
	CatalogManager() {
		initialCatalog();
	}

	~CatalogManager() {
		storeCatalog();
	}

	string getTableNameByIndexName(string indexName) {
		return indexes[indexName].tableName;
	}

	string getAttrNameByIndexName(string indexName) {
		return indexes[indexName].attributeName;
	}

	FieldType getTypeByIndexName(string indexName) {
		return get_attribute_type(indexes[indexName].tableName, indexes[indexName].attributeName);
	}

	Result initialCatalog() {
		Result res = initialTable();
		if(res != SUCCESS)
            return res;
		res = initialIndex(); 
		return res;
	}

	Result storeCatalog() {
		Result res = storeTable();
		if(res != SUCCESS)
            return res;
		res = storeIndex();
		return res;
	}

	Result createTable(string tableName, string primaryKey, vector<Attribute> attrList){
		return createTable(Table(tableName, primaryKey, attrList));
	}

	Result createTable(Table newTable) {
		if(is_table_exist(newTable.tableName))
			return TABLE_NAME_EXSITED;
		tables.insert(make_pair(newTable.tableName, newTable));
		ofstream file;
		string tableFileName = TABLE_DIR + newTable.tableName + TABLE_SUF;
		file.open(tableFileName, ios::out | ios::trunc);
		if ( !file.is_open() ) {
			cout << "CatalogManager::createTable error, open file " << tableFileName << " fail" << endl;
			// file.close();
			return TABLE_CATALOG_FILE_WRITE_ERROR;
		}
		file.close();
		tableFileName = INDEX_DIR + newTable.tableName + INDEX_SUF;
		file.open(tableFileName, ios::out | ios::trunc);
		if ( !file.is_open() ) {
			cout << "CatalogManager::createTable error, open file " << tableFileName << " fail" << endl;
			// file.close();
			return TABLE_CATALOG_FILE_WRITE_ERROR;
		}
		file.close();
		string indexName = newTable.tableName + "_" + newTable.primaryKey;
		createIndex(indexName, newTable.tableName, newTable.primaryKey);
		storeCatalog();
		initialCatalog();
		return SUCCESS;
	}

	Result dropTable(string tableName) {
		if ( !is_table_exist(tableName) )
			return TABLE_NAME_NOEXSIT;

		Table& tmpTable = tables[tableName];
		for ( int i = 0; i < tmpTable.indexVector.size(); i++ )
			indexes.erase(tmpTable.indexVector[i].indexName);
		tables.erase(tableName);
		
		string indexFileName = INDEX_DIR + tableName + INDEX_SUF;
		string tableFileName = TABLE_DIR + tableName + TABLE_SUF;
		remove(indexFileName.c_str());
		remove(tableFileName.c_str());
		

		storeCatalog();
		initialCatalog();
		return SUCCESS;
	}

	Result createIndex(string indexName, string tableName, string attrName){
		return createIndex(Index(indexName, tableName, attrName));
	}

	Result createIndex(Index newIndex) {
		if(is_index_exist(newIndex.indexName))
			return INDEX_NAME_EXSITED;
		if(!is_table_exist(newIndex.tableName))
			return TABLE_NAME_NOEXSIT;
		if(!is_attribute_exist(newIndex.tableName, newIndex.attributeName))
			return ATTRI_NAME_NOEXSIT;
		if(!is_unique(newIndex.tableName, newIndex.attributeName))
			return ATTRI_NOT_UNIQUE;
		Table& tmpTable = tables[newIndex.tableName];
		tmpTable.indexVector.push_back(newIndex);
		tmpTable.indexNum = tmpTable.indexVector.size();
		indexes.insert(make_pair(newIndex.indexName, newIndex));
		table_attrToIndex.insert(make_pair(newIndex.tableName + " " + newIndex.attributeName, newIndex.indexName));
		storeCatalog();
		initialCatalog();
		return SUCCESS;
	}

	Result dropIndex(string indexName) {
		if ( !is_index_exist(indexName) )
			return INDEX_NAME_NOEXIST;

		Index tmpIndex = get_index(indexName);
		if ( !is_table_exist(tmpIndex.tableName) )
			return TABLE_NAME_NOEXSIT;

		Table& tmpTable = tables[tmpIndex.tableName];
		if ( !tmpTable.removeIndex(indexName) )
			return INDEX_NAME_NOEXIST;
		tmpTable.indexNum = tmpTable.indexVector.size();
		indexes.erase(indexName);
		table_attrToIndex.erase(tmpIndex.tableName + " " + tmpIndex.attributeName);

		string indexFileName = INDEX_DIR + indexName + INDEX_SUF;
		remove(indexFileName.c_str());

		storeCatalog();
		initialCatalog();
		return SUCCESS;
	}

	Result add_row_num(string tableName) {
		if(!is_table_exist(tableName))
			return TABLE_NAME_NOEXSIT;
		tables[tableName].rowNum++;
		return SUCCESS;
	}

	Result delete_row_num(string tableName, int num) {
		if(!is_table_exist(tableName))
			return TABLE_NAME_NOEXSIT;
		tables[tableName].rowNum -= num;
		return SUCCESS;
	}

	bool is_primary_key(string tableName, string attributeName) {
		if(tables.find(tableName) != tables.end()) {
			Table tmpTable = tables[tableName];
			return tmpTable.primaryKey == attributeName;
		}
		else {
			cout << "The table " << tableName << " doesn't exist" << endl;
			return false;
		}
	}

	bool is_unique(string tableName, string attributeName) {
		if(tables.find(tableName) != tables.end()) {
			Table tmpTable = tables[tableName];
			for(auto it : tmpTable.attributeVector)
				if(it.attributeName == attributeName)
					return it.isUnique;
			cout << "The attribute " << attributeName << " doesn't exist" << endl;
			return false;
		}
		cout << "The table " << tableName << " doesn't exist" << endl;
		return false;
	}

	bool is_unique(string tableName, int i) {
		return is_unique(tableName, get_attribute_name(tableName, i));
	}

	bool is_table_exist(string tableName) {
		if(tables.find(tableName) == tables.end())
			return false;
		return true;
	}

	bool is_index_exist(string tableName, string attrName){
		return is_index_exist(table_attrToIndex[tableName + " " + attrName]);
	}

	bool is_index_exist(string indexName) {
		if (indexes.find(indexName) == indexes.end())
			return false;
		return true;
	}

	bool is_attribute_exist(string tableName, string attributeName) {
		if(tables.find(tableName) != tables.end()) {
			Table tmpTable = tables[tableName];
			for(auto it : tmpTable.attributeVector)
				if(it.attributeName == attributeName)
					return true;
			cout << "The attribute " << attributeName << " doesn't exist" << endl;
		}
		else
			cout << "The table " << tableName << " doesn't exist" << endl;
		return false;
	}

	bool is_attribute_exist(vector<Attribute> attributeVector, string attributeName) {
		for(auto it : attributeVector)
			if(it.attributeName == attributeName)
				return true;
		return false;
	}

	Table get_table(string tableName) {
		return tables[tableName];
	}

	Index get_index(string indexName) {
		return indexes[indexName];
	}

	string get_primary_key(string tableName) {
		return tables[tableName].primaryKey;
	}

	int get_row_length(string tableName) {
		return tables[tableName].rowLength;
	}

	int get_attribute_num(string tableName) {
		return tables[tableName].attributeNum;
	}

	int get_row_num(string tableName) {
		return tables[tableName].rowNum;
	}

	string get_index_name(string tableName, string attributeName) {
		if(is_index_exist(tableName, attributeName))
			return table_attrToIndex[tableName + " " + attributeName];
		else
			return "";
	}

	FieldType get_attribute_field_type(string tableName, int i) {
		return tables[tableName].attributeVector.at(i).type;
	}

	string get_attribute_name(string tableName, int i) {
		return tables[tableName].attributeVector.at(i).attributeName;
	}

	vector<string> get_titles(string tableName) {
		vector<string> titles;
		for ( int i = 0; i < tables[tableName].attributeVector.size(); i++ ) {
			string temp = get_attribute_name(tableName, i);
			FieldType f = get_attribute_field_type(tableName, i);
			switch (f.get_type()) {
				case INT:
					temp += "(int)";
					break;
				case FLOAT:
					temp += "(float)";
					break;
				case CHAR:
					temp += "(char(" + to_string(f.get_length()) + "))";
					break;
				default:
					break;
			}
			titles.push_back(temp);
		}
		return titles;
	}

	int get_attribute_index(string tableName, string attributeName) {
		Table tmpTable = tables[tableName];
		for(int i = 0; i < tmpTable.attributeVector.size(); i++)
			if (tmpTable.attributeVector.at(i).attributeName == attributeName)
				return i;
		cout << "The attribute " << attributeName << " doesn't exist" << endl;
		return -1;
	}

	FieldType get_attribute_type(string tableName, string attributeName) {
		Table tmpTable = tables[tableName];
		Attribute tmpAttribute;
		for (int i = 0; i < tmpTable.attributeVector.size(); i++) {
			tmpAttribute = tmpTable.attributeVector.at(i);
			if (tmpAttribute.attributeName == attributeName)
				return tmpAttribute.type;
		}
		cout << "The attribute " << attributeName << " doesn't exist" << endl;
		return FieldType();
	}

	FieldType get_attribute_type(string tableName, int i) {
		return get_attribute_type(tableName, get_attribute_name(tableName, i));
	}

	int get_length(string tableName, string attributeName) {
		Table tmpTable = tables[tableName];
		Attribute tmpAttribute;
		for(auto it : tmpTable.attributeVector)
			if(it.attributeName == attributeName)
				return it.type.get_length();
		cout << "The attribute " << attributeName << " doesn't exist" << endl;
		return -1;
	}

	string get_type(string tableName, int i) {
		NumType type = tables[tableName].attributeVector.at(i).type.get_type();
		switch (type) {
		case CHAR:
			return "CHAR";
		case INT:
			return "INT";
		case FLOAT:
			return "FLOAT";
		default:
			return "DEFAULT";
		}
	}

	int get_length(string tableName, int i) {
		return tables[tableName].attributeVector.at(i).type.get_length();
	}

	int get_max_attr_length(Table table) {
		int len = 9; // The size of "ATTRIBUTE"
		for(auto it : table.attributeVector) {
			int v = it.attributeName.length();
			len = v > len ? v : len;
		}
		return len;
	}

	void show_table() {
		Table tmpTable;
		Attribute tmpAttribute;
		for(auto it : tables) {
			tmpTable = it.second;
			cout << "[TABLE] " << tmpTable.tableName << endl;
			int attr = get_max_attr_length(tmpTable);
			cout << "|" << left << setw(attr) << "ATTRIBUTE" << "|" << left << setw(5) << "TYPE" << "|" << left << setw(6) << "LENGTH" << "|" << left << setw(6) << "UNIQUE" << "|" << endl; // TYPE has maximum size of 5("FLOAT")
			for(auto it : tmpTable.attributeVector)
				cout << "|" << left << setw(attr) << it.attributeName << "|" << left << setw(5) << it.type.get_type() << "|" << left << setw(6) << it.type.get_length() << "|" << left << setw(6) << it.isUnique << "|" << endl;
			cout << "--------------------------------" << endl;
		}
	}
	
	void show_index() {
		Index tmpIndex;
		int idx = 5, tab = 5, attr = 9; // "INDEX", "TABLE", "ATTRIBUTE"
		for(auto it : indexes) {
			tmpIndex = it.second;
			idx = tmpIndex.indexName.length() > idx ? tmpIndex.indexName.length() : idx;
			tab = tmpIndex.tableName.length() > tab ? tmpIndex.tableName.length() : tab;
			attr = tmpIndex.attributeName.length() > attr ? tmpIndex.attributeName.length() : attr;
		}
		for(auto it : indexes) {
			tmpIndex = it.second;
			cout << "|" << left << setw(idx) << tmpIndex.indexName << "|" << left << setw(tab) << tmpIndex.tableName << "|" << left << setw(attr) << tmpIndex.attributeName << "|" << endl;
		}
	}

	void show_catalog() {
		show_table();
		cout << endl;
		show_index();
	}
};

#endif
