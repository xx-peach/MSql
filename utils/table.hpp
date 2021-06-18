#ifndef __TABLE_H__
#define __TABLE_H__

#include <vector>
#include "index.hpp"
#include "attribute.hpp"
#include "../buffer/buffer.hpp"

using namespace std;

class Table {
public:
	string tableName;					// name of the current table
	string primaryKey;					// name of primary attribute of the table
	int primaryKeyIndex;				// the index of the primary key in the attributes list of current table
	vector<Attribute> attributeVector;	// vector of all the attribute objects
	vector<Index> indexVector;			// vector of all the index objects
	int attributeNum;					// total number of attributes in the table
	int indexNum;						// total number of indexes in the table
	int rowNum; 						// number of tuples
	int rowLength; 						// length of each tuple

	Table() {}

	Table(const string& _tableName, const string& _primaryKey, const vector<Attribute>& _attributeVector) {
		this->attributeNum = _attributeVector.size();
		this->attributeVector = _attributeVector;
		this->primaryKey = _primaryKey;
		this->rowLength = sizeof(int); 				// Row index of tuple, has nothing to do with Index.hpp
		this->tableName = _tableName;
		this->indexNum = 0;
		this->rowNum = 0;
		for ( int i = 0; i < _attributeVector.size(); i++ ) {
			if ( _attributeVector[i].attributeName == _primaryKey ) {
				this->attributeVector[i].isUnique = true;
				this->primaryKeyIndex = i;
			}
			this->rowLength += _attributeVector[i].type.get_length();
		}
	}

	Table(const string& _tableName, const string& _primaryKey, const vector<Attribute>& _attributeVector, const vector<Index>& _indexVector, const int _rowNum) {
		this->attributeNum = _attributeVector.size();
		this->attributeVector = _attributeVector;
		this->indexNum = _indexVector.size();
		this->indexVector = _indexVector;
		this->primaryKey = _primaryKey;
		this->rowLength = sizeof(int); 				// Row index of tuple, has nothing to do with Index.hpp
		this->tableName = _tableName;
		this->rowNum = _rowNum;
		for ( int i = 0; i < _attributeVector.size(); i++ ) {
			if ( _attributeVector[i].attributeName == _primaryKey ) {
				this->attributeVector[i].isUnique = true;
				this->primaryKeyIndex = i;
			}
			this->rowLength += _attributeVector[i].type.get_length();
		}
	}

	bool removeIndex(string _indexName) {
		for ( vector<Index>::iterator iter = indexVector.begin(); iter != indexVector.end(); iter++ ) {
			if ( iter->indexName == _indexName ) {
				indexVector.erase(iter);
				return true;
			}
		}
		return false;
	}
};

#endif