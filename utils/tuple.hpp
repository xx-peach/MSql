#ifndef __TUPLE_H__
#define __TUPLE_H__

#include <vector>
#include "element.hpp"

/* A row in the table */
class Tuple {
private:
    int index;                  // Row index, has nothing to do with Index.hpp
    vector<Element> data;       // a tuple is consist of a vector of element objects

public:
    /* default constructor */
    Tuple() {}

    /* potential constructor */
    Tuple(const int elementNum) {
        Tuple();
        data.resize(elementNum);
    }

    /* copy constructor */
    Tuple(const Tuple& t) {
        index = t.index;
        data = t.data;
    }

    /* constructor by a vector of element objects */
    Tuple(vector<Element>& elements) {
        for ( auto it : elements ) {
            push_back_Data(it);
        }
    }

    /* push a element object into the element vector of the tuple */
    void push_back_Data(Element& e) {
        this->data.push_back(e);
    }

    /* operator overload */
    bool operator==(const Tuple& t) {
        if ( t.data.size() != data.size() )
            return false;
        for ( int i = 0; i < data.size(); i++ ) {
            if ( data[i] != t.data[i] ) {
                return false;
            }
        }
        return true;
    }
    
    vector<Element> getData() const {
        return this->data;
    }
    
    int getIndex() {
        return index;
    }
    
    void setIndex(int i) {
        index = i;
    }
};

#endif
