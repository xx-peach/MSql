#ifndef __TUPLE_H__
#define __TUPLE_H__

#include <vector>
#include "element.hpp"

/* A row in the table */
class Tuple {
private:
    int index;                  // Row index, has nothing to do with Index.hpp
    vector<Element> data;       // A tuple consists of a vector of element objects
    bool is_deleted;            // Whether the tuple is deleted

public:
    /* default constructor */
    Tuple() {
        is_deleted = false;
    }

    /* potential constructor */
    Tuple(const int elementNum) {
        Tuple();
        data.resize(elementNum);
        is_deleted = false;
    }

    /* copy constructor */
    Tuple(const Tuple& t) {
        index = t.index;
        data = t.data;
        is_deleted = t.is_deleted;
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

    bool isDeleted() {
        return is_deleted;
    }

    void setDeleted(bool status) {
        is_deleted = status;
    }

    void outputTuple(){
        cout << "index = " << index << ", data = ";
        for(int i = 0; i < data.size(); i++){
            data[i].printElement();
            cout << "(" << data[i].type << ")" << ", ";
        }
        cout << endl;
    }
};

#endif
