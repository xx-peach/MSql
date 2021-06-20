#ifndef __ELEMENT_H__
#define __ELEMENT_H__

#include <string>
#include <cstring>
#include <cstdlib>

#include "fieldType.hpp"

/* Elementary data in tuples */
class Element {
public:
    NumType type;       // the type of the class

    int int_data;       // int type data
    float float_data;   // float type data
    string char_data;   // string type data

    int length;         // type == CHAR: length = maximum string length + 1('\0')
                        // type == FLOAT: length = 4
                        // type == INT: length = 4

    /* default constructor */
    Element() {}
    
    /* constructor for string */
    Element(string& s) {
        type = CHAR;
        char_data = s;
        length = s.length();
    }
    
    /* constructor for float */
    Element(float f) {
        type = FLOAT;
        float_data = f;
        int_data = (int)f;
        length = 4;
    }
    
    /* constructor for int */
    Element(int i) {
        type = INT;
        int_data = i;
        float_data = (float)i;
        length = 4;
    }
    
    /* copy constructor */
    Element(const Element& t) {
	    type = t.type;
	    int_data = t.int_data;
	    float_data = t.float_data;
	    char_data = t.char_data;
	    length = t.length;
    }
    
    /* default distructor */
    ~Element() {}

    /* set the data of the current element */
    void setData(const int i) { 
        int_data = i;
        float_data = (float)i;
    }
    void setData(const float f) {
        float_data = f;
        int_data = (int)f;
    }
    void setData(const string& s) {
        char_data = s;
    }

    /* set the type of the current element */
    void setType(const NumType t) {
        type = t;
    }
    
    /* set the length of the current element */
    void setLength(const int l) {
        length = l;
    }

    /* write the element to a char array */
    void elementToChar(char *c) {
        if ( type == INT )
            memmove(c, &int_data, length);
        else if ( type == FLOAT )
            memmove(c, &float_data, length);
        else if ( type == CHAR ) {
            for ( int i = 0; i < length; i++ ) {
                if ( i < char_data.length() )
			        c[i] = char_data[i];
		        else
			        c[i] = 0;
            }
        }
    }

    /* convert the char array to its original type */
    void charToElement(char *c) {
        if ( type == INT )
            memmove(&int_data, c, length);
        else if ( type == FLOAT )
            memmove(&float_data, c, length);
        else if ( type == CHAR ) {
            char *temp = (char *)malloc(length * sizeof(char));
            memmove(temp, c, length);
            char_data = string(temp);
            free(temp);
        }
    }

    /* for output or debug */
    string elementToString() {
        string t;
        if ( type == INT)
            t = to_string(int_data);
        else if ( type == FLOAT )
            t = to_string(float_data);
        else if ( type == CHAR )
            t = char_data;
        return t;
    }

    /* for output or debug */
    void printElement() {
        if ( type == INT )
            cout << int_data;
        else if ( type == FLOAT )
            cout << float_data;
        else if ( type == CHAR ) 
            cout << char_data;
    }

    /* operator overload */
    bool operator<(const Element &e) {
        if ( e.type != type )
            return false;
        if ( e.type == INT )
            return int_data < e.int_data;
        if ( e.type == FLOAT )
            return float_data < e.float_data;
        if ( e.type == CHAR )
            return char_data < e.char_data;
        return false;
    }

    /* operator overload */
    bool operator==(const Element &e) {
        if ( e.type != type )
            return false;
        if ( e.type == INT )
            return int_data == e.int_data;
        if ( e.type == FLOAT )
            return float_data == e.float_data;
        if ( e.type == CHAR )
            return char_data == e.char_data;
        return false;
    }

    /* operator overload */
    bool operator>(const Element &e) {
        if ( e.type != type )
            return false;
        if ( e.type == INT )
            return int_data > e.int_data;
        if ( e.type == FLOAT )
            return float_data > e.float_data;
        if ( e.type == CHAR )
            return char_data > e.char_data;
        return false;
    }

    /* operator overload */
    bool operator>=(const Element &e) {
        if ( e.type != type )
            return false;
        if ( e.type == INT )
            return int_data >= e.int_data;
        if ( e.type == FLOAT )
            return float_data >= e.float_data;
        if ( e.type == CHAR )
            return char_data >= e.char_data;
        return false;
    }

    /* operator overload */
    bool operator<=(const Element &e) {
        if ( e.type != type )
            return false;
        if ( e.type == INT )
            return int_data <= e.int_data;
        if ( e.type == FLOAT )
            return float_data <= e.float_data;
        if ( e.type == CHAR )
            return char_data <= e.char_data;
        return false;
    }

    /* operator overload */
    bool operator!=(const Element &e) {
	    return !operator==(e);
    }

    /* operator overload */
    friend ostream &operator<<(ostream &os, Element &e) {
        switch (e.type) {
            case CHAR:
                os << e.char_data;
                break;                
            case FLOAT:
                os << e.float_data;
                break;
            case INT:
                os << e.int_data;
                break;
            default:
                break;
        }
        return os;
    }
};

#endif