#ifndef _BPLUS_TREE_HPP_
#define _BPLUS_TREE_HPP_
#include <iostream>
#include "node.hpp"
using namespace std;

template <class T>
class BPlusTree{
public:
    block_t root_index;         //root index
    block_t first_leaf_index;   //for transfer
    int order;                  //order of all the nodes
    int size_of_type;           //size of data type
    string table_name;          //attribute name
    // string db_name;             
    // string table_name;

private:
    BufferManager& buffer_manager;

    //Search value from the root by binary search, return the leaf node res_node with the value's index in node
    void SearchInNodeExe(const std::shared_ptr<Node<T>> &node, T value, std::shared_ptr<Node<T>> &res_node, int &index);

    //splite node execution
	void SpliteExe(std::shared_ptr<Node<T>> &node);

    //union the node with cascading
    void Union(std::shared_ptr<Node<T>> node);

    //union nodes or move elements when deleting elements
    //deleted node is used to store the information of deleted node, return true iff union is done
	bool UnionOrMoveExe(std::shared_ptr<Node<T>> node);

    //write the node information to buffer
    void WriteNodeBackToBuffer(std::shared_ptr<Node<T>> &node);

    //return char* type of block.data
	char* GetBlockData(block_t index);

    //return block's iter of given block index
    biter GetBlockOffset(block_t index);

    //Error information
    void InsertFail(int value){cout << "[ERROR]Insert value "<< value << " is already in the tree" <<endl;}
    void DeleteFail(int value){cout << "[ERROR]Delete value "<< value << " doesn't exist in the tree" <<endl;}

    //set the node empty and write it to buffer
    void SetEmptyBackToBuffer(std::shared_ptr<Node<T>> &node);

    //new node pointer
    std::shared_ptr<Node<T>> NewNodePointer(int index){return (std::make_shared<Node<T>>(this->order, index, GetBlockData(index), this->size_of_type));}
    
public:
    //ctor
    BPlusTree(BufferManager& buffer_manager, string table_name, int order, int size_of_type, block_t root_index = -1,block_t first_leaf_index = -1);//last 2 defalut non
    ~BPlusTree();

    //find value in b+ tree, return the offset of value in the result node. return false if failed
    int Search(T value);

    //insert value into tree, return false if failed
    bool InsertElement(T value, int offset);

    //delete value from tree, return false if failed
    bool DeleteElement(T value);

    //return the block offset that greater than value
    void GreaterThan(T value, std::vector<block_t> &block_offset);

    //return the block offset that lessthan than value
    void LessThan(T value, std::vector<block_t> &block_offset);
    
    //output for test
    void LevelOrderOutput(void);
};



#endif