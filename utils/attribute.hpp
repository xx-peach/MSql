#ifndef __ATTRIBUTE_H__
#define __ATTRIBUTE_H__

#include <string>
#include "fieldType.hpp"
using namespace std;

class Attribute {
public:
	bool isUnique;			// bool to denote its uniqueness
	FieldType type;			// type of the current attribute
	string attributeName;	// name of the current attribute

	Attribute() {}

	Attribute(const string& _attributeName, const NumType _type, bool _isUnique) {
		assert(_type == INT || _type == FLOAT);
		this->attributeName = _attributeName;
		FieldType* temp = new FieldType(_type); 			// INT or FLOAT only
		this->type = *temp;
		this->isUnique = _isUnique;
	}

	Attribute(const string& _attributeName, const NumType _type, const int _length, bool _isUnique) {
		assert(_type == CHAR || _length == 4);
		this->attributeName = _attributeName;
		FieldType* temp = new FieldType(_type, _length); 	// INT or FLOAT or CHAR
		this->type = *temp;
		this->isUnique = _isUnique;
	}
};

#endif