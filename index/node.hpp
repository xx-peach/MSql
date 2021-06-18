#ifndef _NODE_HPP_
#define _NODE_HPP_
#include "../buffer/buffer.hpp"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <memory>
using namespace std;

template <class T>
class Node{
public:
    int order;                      //order of the node, thus n
    block_t block_index;            //index of present block
    block_t parent_index;           //index of parent, -1 for null
    bool is_leaf;                   //true if it is leaf node
    block_t next_leaf_index;        //index of leaf node, -1 for null
    int element_num;             //number of elements
    vector<T> element;              //list of elements
    vector<block_t> childs_index;   //indexs of child blocks, -1 for null
    vector<int> offset;             //offset for record

public:
    //ctor
    Node(int order, block_t block_index, bool is_leaf );                   //create new node
    Node(int order, block_t block_index, char* block_head, int size_of_type);   //load block from files

    //dtor
    ~Node(){}

    //search value in the node. not find: negative, else return index
    int Search(T value);
    
    //splite the node
    void Splite(T &value, std::shared_ptr<Node<T>> &NewNode);

    //not leaf node add value
    void AddElementNonLeafNode(T value, std::shared_ptr<Node<T>> new_child_node); 

    //leaf node add value
    void AddElementLeafNode(T value, int offset);

    //delete the element of given index
    void DeleteElement(int index);       

    void OutputNode(){//for test
        cout << "|*";
        if(this->is_leaf){
            cout << this->offset[0] << "*|$ ";
            for(int i=0; i<element_num; i++){
                cout << this->element[i] << " $|*";
                cout << this->offset[i+1]<< "*|";
                if(i < element_num-1)cout << "$ ";
            }
        }else{
            cout << this->childs_index[0] << "*|$ ";
            for(int i=0; i<element_num; i++){
                cout << this->element[i] << " $|*";
                cout << this->childs_index[i+1]<< "*|";
                if(i < element_num-1)cout << "$ ";
            }
        }
    }

    //for error information
    void AlreadyExist(int value){
        this->OutputNode();
        cout<< endl << "[ERROR]Element " << value <<" is already in this node." << endl;
    }
};

//*************************************Node******************************************//

template <class T>
Node<T>::Node(int order, block_t block_index, bool is_leaf){//create new node
    this->order = order;
    this->block_index = block_index;
    this->is_leaf = is_leaf;
    this->parent_index = -1;
    this->next_leaf_index = -1;
    this->element_num = 0;
    for(int i=0; i<order ; ++i){//element has 1 more space for split element
        this->element.push_back(T());
        this->offset.push_back(0);
        this->childs_index.push_back(-1);
    }
    this->childs_index.push_back(-1);//1 more space for split  
}

template <class T>
Node<T>::Node(int order, block_t block_index, char* block_head, int size_of_type){  //load block from files
    this->order = order;
    this->block_index = block_index;
    //access information
    this->element_num = *((int*)(block_head+sizeof(char)));
    this->parent_index = *((block_t *)(block_head+sizeof(char)+sizeof(int)));//is_leaf:num:p_index
    int i =  sizeof(char)+sizeof(int)+sizeof(block_t);//byte offset
    for(int j=0; j<order ; ++j){//element has 1 more space for split element
        this->element.push_back(T());
        this->offset.push_back(0);
        this->childs_index.push_back(-1);
    }  
    this->childs_index.push_back(-1);

    if(block_head[0]==1){//first: is leaf
        this->is_leaf = true;
        this->next_leaf_index = *((block_t *)(block_head+i));//leaf:next_leaf_index
        i += sizeof(block_t);
    }else{//not leaf
        this->is_leaf = false;  
        this->next_leaf_index = -1;
        this->childs_index[0] = *(block_t*)(block_head + i);//not leaf:child[0]
        i += sizeof(block_t);
    }    

    for(int j=0; j < this->element_num; j++){//order of childs
        if (std::is_same<T,std::char*>::value){//string
            char* temp = new char[size_of_type+1];
            memcpy(temp,block_head+i,size_of_type);//string data
            temp[size_of_type] = '\0';//ensure to be string
            this->element[j] = temp;
            i += size_of_type;
            delete[] temp;
        }else{//float or int
            this->element[j] = *((T*)(block_head + i));//float or int data
            i += sizeof(T);
        }

        if(this->is_leaf){//data|offset|data|offset|...
            this->offset[j] = *((int *)(block_head + i));   //store offset
            i += sizeof(int);
        }else{//not leaf://data|child|data|child|...
            this->childs_index[j+1] = *((block_t *)(block_head + i));   //store childs
            i += sizeof(int);
        }
    }
}

template <class T>
int Node<T>::Search(T value){
    if(element_num<=0)return -1;//empty node, actually will not happen
    if(element[0] > value) return -1;//not find
    if(element[element_num-1] < value)return -(element_num+1);//not find
    //else
    if(element_num > 0){//binary search
        int left=0, right = element_num-1, mid;
        while(left<=right){
            mid = (left + right) >> 1;
            if(element[mid]==value)return mid;
            else if(element[mid] < value) left = mid+1;
            else right = mid-1;
        }
        return -(left+1);//not find, need to insert at |here|-1 = left index
    }
    cout << "[ERROR]Node<T>::Search(" << value <<") failed." <<endl;
    return -1;
}

template <class T>
void Node<T>::Splite(T &value, std::shared_ptr<Node<T>> &NewNode){
    NewNode->is_leaf = this->is_leaf;
    if(this->is_leaf){
        value = this->element[element_num/2];//minimum element in new node
        for(int i=element_num/2; i<element_num; i++){
            NewNode->element[i - element_num/2] = this->element[i];
            NewNode->offset[i - element_num/2] = this->offset[i];
        }
        NewNode->next_leaf_index = this->next_leaf_index;
        this->next_leaf_index = NewNode->block_id;
        NewNode->parent_index = this->parent_index;
        NewNode->element_num=this->element_num - (this->element_num/2);
        this->element_num = this->element_num/2;
    }else{
        value = this->element[(element_num+1)/2-1];//min element in newnode
        for(int i= (element_num+1)/2; i < element_num; i++){//min child value from next of min element in newnode
            NewNode->element[i - (element_num+1)/2] = this->element[i];
            NewNode->childs_index[i - (element_num+1)/2] = this->childs_index[i];
            this->childs_index[i] = -1;
        }
        //last transfer
        NewNode->childs_index[element_num - (element_num+1)/2] = this->childs_index[element_num];
        this->childs_index[element_num] = -1;
        
        NewNode->parent_index = this->parent_index;
        NewNode->element_num = element_num - (element_num+1)/2;
        this->element_num = (element_num+1)/2 -1;
    }
}

//find the place value should be, and add in the new child node
template<class T>
void Node<T>::AddElementNonLeafNode(T value, std::shared_ptr<Node<T>> new_child_node){
    int insert_index = Search(value);
    if(insert_index < 0){
        insert_index = - insert_index - 1;
        for(int i = this->element_num -1; i >= insert_index; i--){
            this->element[i+1] = this->element[i];
            this->childs_index[i+2] = childs_index[i+1];
        }
        this->element[insert_index] = value;
        this->childs_index[insert_index +1] = new_child_node->block_index;
        new_child_node->parent_index = this->block_index;
        this->element_num++;
    }else{//already exist
        AlreadyExist(value);
    }
}

//find the place value should be, and add in the new child node
template <class T>
void Node<T>::AddElementLeafNode(T value, int offset){                                 //leaf node add
    int insert_index = Search(value);
    if(insert_index < 0){
        insert_index = - insert_index - 1;
        for(int i = this->element_num -1; i >= insert_index; i--){
            this->element[i+1] = element[i];
            this->offset[i+1] = element[i];
        }
        this->element[insert_index] = value;
        this->offset[insert_index] = offset;
        this->element_num++;
    }else{//already exist
        AlreadyExist(value);
    }
}


//delete element, with element and childs(immediate after element) all shift left
//if i = -1, remove the min value
template <class T>
void Node<T>::DeleteElement(int index){
    for(int i=index; i < element_num-1; i++){
        if(i>=0){
            element[i] = element[i+1];
            if(is_leaf)offset[i] = offset[i+1];
        }
    }
    if(is_leaf==false){//non leaf->update childs
        for(int i = index+1; i < element_num; i++){
            if(i >= 0)childs_index[i] = childs_index[i+1];
        }
        childs_index[element_num] = -1;//set null
    }
    element_num--;
}

#endif