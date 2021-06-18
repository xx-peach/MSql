#ifndef __FIELD_TYPE_H__
#define __FIELD_TYPE_H__

#include <iostream>
#include <assert.h>
#include "../config.hpp"

using namespace std;

/* Types of attributes */
class FieldType {
private:
	int length; 								// length of CHAR type
	NumType type;								// the type of this class

public:
	FieldType() { 
		NumType t = DEFAULT;
		this->type = t;
		this->length = DEFAULTSIZE;
	}
	
	FieldType(NumType _type) {
		assert(_type == INT || _type == FLOAT);	// only CHAR can not call this ctor, since its length must be specified
		this->type = _type; 					// INT or FLOAT only
		this->length = 1;
	}

	FieldType(NumType _type, int _length) {
		assert(_type == CHAR || _length == 4); 	// INT or FLOAT must have length of 4
		this->type = _type;						// INT or FLOAT or CHAR
		this->length = _length;
	}

	NumType get_type() const {
		return this->type;
	}

	int get_length() const {
		if ( this->type == CHAR ) 
			return this->length * CHARSIZE;
		else if ( this->type == INT ) 
			return INTSIZE;
		else if ( this->type == FLOAT )
			return FLOATSIZE;
		else
			return DEFAULTSIZE;
	}

	// void set_type(NumType _type) {
	// 	this->type = _type;
	// }

	// void set_length(int _length) {
	// 	this->length = _length;
	// }
};

#endif