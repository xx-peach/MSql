#ifndef __INDEX_H__
#define __INDEX_H__

#include <iostream>
#include <string>
using namespace std;

class Index {
public:
	string indexName;
	string tableName;
	string attributeName;
	int blockNum = 0;
	int rootNum = 0;

	Index() {}

	Index(string indexName, string tableName, string attributeName, int blockNum = 0, int rootNum = 0) {
		this->indexName = indexName;
		this->tableName = tableName;
		this->attributeName = attributeName;
		this->blockNum = blockNum;
		this->rootNum = rootNum;
	}

	bool operator==(const Index t){
		if(indexName == t.indexName && tableName == t.tableName && attributeName == t.attributeName)
            return true;
		else
            return false;
	}
};

#endif