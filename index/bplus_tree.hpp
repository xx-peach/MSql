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
    int size_of_type;           //size of data types
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
    // #ifdef __cplusplus
    // extern "C" {
    // #endif

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
    // #ifdef __cplusplus
    // }
    // #endif
};

//******************************************BPlusTree**********************************************//

//construct function of B+ Tree
template <class T>
BPlusTree<T>::BPlusTree(BufferManager& _buffer_manager,string table_name, int order, int size_of_type, block_t root_index,block_t first_leaf_index):
    buffer_manager(_buffer_manager){
    // this->db_name = db_name;
    this->table_name = table_name;
    // this->table_name = table_name;
    this->order = order;
    this->size_of_type = size_of_type;
    this->root_index = root_index;
    this->first_leaf_index = first_leaf_index;
    if(this->root_index==-1){//not such node
        biter temp = buffer_manager.getFileBlock(table_name,1,size_of_type,1);//get an new block from the file,record amont = 1,len is arbitrary
        this->root_index = (*temp)->block_index;
        this->first_leaf_index = this->root_index;//from new block
        std::shared_ptr<Node<T>> root_node = std::make_shared<Node<T>>(order,this->root_index,true);//use node consrtuction/true:is_leaf
        WriteNodeBackToBuffer(root_node);//update
    }
}

template <class T>
BPlusTree<T>::~BPlusTree() = default;

//write the node information to buffer
template <class T>
void BPlusTree<T>::WriteNodeBackToBuffer(std::shared_ptr<Node<T>>& node){
    if(node->element_num >= order){//update check for spliting
        SpliteExe(node);
    }
    biter temp = GetBlockOffset(node->block_index);//find the block in the file
    char* block_head = new char[block_size];
    int i = 0;
    //order of the data in block:   is_leaf |   num |   p_index | data | offset/childs | ...
    if(node->is_leaf)block_head[0] = 1;
    else block_head[0] = -1;
    i += sizeof(char);
    *((int*)(block_head+i)) = node->element_num;
    i += sizeof(int);
    *((block_t*)(block_head+i)) = node->parent_index;
    i += sizeof(block_t);
    if(node->is_leaf){
        *((block_t*)(block_head+i)) = node->next_leaf_index;
        i += sizeof(block_t);
    }else{
        *((block_t*)(block_head+i)) = node->childs_index[0];
        i += sizeof(block_t);
    }
    string st;
    //reverse process of node constructor function
    for(int j=0; j < node->element_num; j++){
        st = node->element[j];
        if  constexpr (std::is_same<typename std::decay<T>::type, char*>::value){//string
            memcpy(block_head + i,st.c_str(),size_of_type);//copy into block
            i += size_of_type;
        }else{//float or int
            *((T*)(block_head + i)) = node->element[j];
            i += sizeof(T);
        }

        if(node->is_leaf){//data|offset|data|offset|...
            *((int*)(block_head + i)) = node->offset[j];  //store offset
            i += sizeof(int);
        }else{//not leaf://data|child|data|child|...
            *((block_t *)(block_head + i)) = node->childs_index[j+1];   //store childs
            i += sizeof(block_t);
        }
    }
    (*temp)->writecover(block_head,i);
    // (*temp)->data = block_head;//change the data in block(write back)
    // (*temp)->use_times ++;//use time ++ 
    // (*temp)->block_dirty_bit = 1;//use the block
}


//return char* type of block.data
template<class T>
char* BPlusTree<T>::GetBlockData(block_t index){
    biter block_temp = GetBlockOffset(index);//find the block in the file
    return ((*block_temp)->data);
}

//search function
template <class T>
int BPlusTree<T>::Search(T value){
    std::shared_ptr<Node<T>> res_node;//store result node information
    int res_index = -1;//result index
    //reconstruct the root node for search
    std::shared_ptr<Node<T>> root_node = NewNodePointer(this->root_index);
    SearchInNodeExe(root_node,value,res_node,res_index);
    if(res_index < 0)return -1;//not find
    else return(res_node->offset[res_index]);//return the offset
}

template <class T>
void BPlusTree<T>::SearchInNodeExe(const std::shared_ptr<Node<T>> &node, T value, std::shared_ptr<Node<T>> &res_node, int &index){
    if(node == nullptr){
        res_node = nullptr;//not find
        index = -1;
        return;
    }else{
        int search_res = node->Search(value);
        if(node->is_leaf){//search in the leaf node, get result or not
            res_node = node;
            index = search_res;
            return;
        }else{
            if(search_res < 0){//not find
                //(|here| - 1 )-1= left -1 = -(search_res+1)-1
                search_res = -search_res - 2;
            }
            block_t child_index = node->childs_index[search_res+1];//child index 1 bigger than element
            const std::shared_ptr<Node<T>> child_node = NewNodePointer(child_index);
            SearchInNodeExe(child_node,value,res_node,index);
        }
    }
}


//insert an element into b+ tree
template <class T>
bool BPlusTree<T>::InsertElement(T value, int offset){
    std::shared_ptr<Node<T>> root_node = NewNodePointer(root_index);
    std::shared_ptr<Node<T>> res_node;
    int insert_index = -1;//default not found
    SearchInNodeExe(root_node,value,res_node,insert_index);//search from root_node
    if(insert_index < 0){//not exist
        insert_index = -insert_index -1;
        res_node->AddElementLeafNode(value, offset);//insert into leaf node
        WriteNodeBackToBuffer(res_node);//update node
        if(res_node->element_num >= order){
            SpliteExe(res_node);//upward
        }
        return true;
    }else{//already exist
        InsertFail(value);
        return false;
    }
}

//get the biter easily
template <class T>
biter BPlusTree<T>::GetBlockOffset(block_t index){
    fiter file_temp = buffer_manager.getFile(this->table_name, 1, size_of_type, 1);//get the file
    biter block_temp = buffer_manager.getBlockbyOffset(file_temp, index);//find the blockin the file
    return block_temp;
}



//splite node execution
template<class T>
void BPlusTree<T>::SpliteExe(std::shared_ptr<Node<T>>& node){
    biter new_node_iter = buffer_manager.getFileBlock(this->table_name,1,size_of_type,1);
    block_t new_node_index = (*new_node_iter)->block_index;
    std::shared_ptr<Node<T>> new_node = std::make_shared<Node<T>>(this->order,new_node_index,node->is_leaf);//new node
    T min_value;
    node->Splite(min_value,new_node);//current level splite
    WriteNodeBackToBuffer(node);//update orginal node to buffer
    WriteNodeBackToBuffer(new_node);//update new node to buffer
    
    if(node->is_leaf == false){//not leaf
        block_t child_index;
        biter new_node_iter;
        char * child_data;
        for(int j=0; j< new_node->element_num + 1; j++){//update the childs to buffer
            child_index = new_node->childs_index[j];
            if(child_index >= 0)child_data = GetBlockData(child_index);
            else break;//illegal child node
            //copy sons:
            std::shared_ptr<Node<T>> child_node = NewNodePointer(child_index);
            WriteNodeBackToBuffer(child_node);
        }
        //original node's childs need not change, because the parent not change
    }
    if(node->parent_index == -1){// root node, need to create new root node
        biter new_root_iter = buffer_manager.getFileBlock(this->table_name, 1, size_of_type, 1);
        block_t new_root_index = (*new_root_iter)->block_index;
        std::shared_ptr<Node<T>> new_root_node = std::make_shared<Node<T>>(order, new_root_index, false);
        //change root
        this->root_index = new_root_index;
        node->parent_index = new_root_index;
        new_node->parent_index = new_root_index;
        new_root_node->element[0] = min_value;//min value in the sub tree
        new_root_node->element_num = 1;
        new_root_node->childs_index[0] = node->block_index;
        new_root_node->childs_index[1] = new_node->block_index;
        WriteNodeBackToBuffer(node);//update orginal node to buffer
        WriteNodeBackToBuffer(new_node);//update new node to buffer
        WriteNodeBackToBuffer(new_root_node);//update new root node to buffer
    }else{//not root, recursive
        block_t parent_index = node->parent_index;//restore parent node
        std::shared_ptr<Node<T>> parent_node = NewNodePointer(parent_index);
        parent_node->AddElementNonLeafNode(min_value,new_node);//add non leaf node
        new_node->parent_index = parent_index;
        WriteNodeBackToBuffer(new_node);
        WriteNodeBackToBuffer(parent_node);
        if(parent_node->element_num >= order){//need to splite upward
            SpliteExe(parent_node);
        }
    }
}


//remove an element from b+ tree
template <class T>
bool BPlusTree<T>::DeleteElement(T value){
    //like insert, first find position to delete
    std::shared_ptr<Node<T>> root_node = NewNodePointer(root_index);
    int delete_index = -1;
    std::shared_ptr<Node<T>> res_node;//must be leaf node
    SearchInNodeExe(root_node,value,res_node,delete_index);
    if(delete_index < 0){//not exist
        DeleteFail(value);
        return false;
    }else{//exist
        if(res_node->parent_index == -1){//only one root node
            res_node->DeleteElement(delete_index);
            WriteNodeBackToBuffer(res_node);//update root node
        }else{//res_node is not root
    //every leftest value must be a min value in some parent node(or the first leaf node), thus need update upward
            if(delete_index == 0 && res_node->block_index != this->first_leaf_index){
                block_t parent_index = res_node->parent_index;
                std::shared_ptr<Node<T>> parent_node = NewNodePointer(parent_index);
                int upward_index = parent_node->Search(res_node->element[0]);//leftest value in res_node
                while(upward_index <0){
                    if(parent_node->parent_index != -1){//not root
                        parent_index = parent_node->parent_index;
                        parent_node = NewNodePointer(parent_index);
                        upward_index = parent_node->Search(res_node->element[0]);
                    }else break;//already in the root node   
                }
                parent_node->element[upward_index] = res_node->element[1];//2th left value
                WriteNodeBackToBuffer(parent_node);
                res_node->DeleteElement(0);
            }else{
                res_node->DeleteElement(delete_index);
            }
            WriteNodeBackToBuffer(res_node);
            if(res_node->element_num < (order-1)/2)//need to union
                 Union(res_node);//union
        }
        return true;
    }
}

template <class T>
void BPlusTree<T>::Union(std::shared_ptr<Node<T>> node){
    if(UnionOrMoveExe(node)==true){//has been changed
        LevelOrderOutput();
        block_t parent_index = node->parent_index;
        std::shared_ptr<Node<T>> parent_node = NewNodePointer(parent_index);
        if(parent_node->parent_index != -1){//not root
            if(parent_node->element_num < (order - 1)/2)
                Union(parent_node);
        }else{//root node
            if(parent_node->element_num <= 1 ){//not need root
                //can't be node here. maybe return sibling and node has been deleted
                this->root_index = parent_node->childs_index[0];
                std::shared_ptr<Node<T>> root_node = NewNodePointer(root_index);
                root_node->parent_index = -1;
                WriteNodeBackToBuffer(root_node);
                SetEmptyBackToBuffer(parent_node);//release space for parent node
            }
        }
    }
}

template <class T>
void BPlusTree<T>::LevelOrderOutput(){
    queue<block_t> Q;
    Q.push(this->root_index);
    block_t block_index;
    std::shared_ptr<Node<T>> block_node;
    while(!(Q.empty())){
        block_index = Q.front(); 
        Q.pop();
        block_node = NewNodePointer(block_index);
        block_node->OutputNode();
        for(int i=0; i<=block_node->element_num; i++){
            Q.push(block_node->childs_index[i]);
        }
    }
}
//union nodes or move elements when deleting elements
//deleted node is used to store the information of deleted node
//return true iff union is done, maybe some code can be reuse
template <class T>
bool BPlusTree<T>::UnionOrMoveExe(std::shared_ptr<Node<T>> node){
    if(node->parent_index == -1){//root node, not need to union
        cout << "[ERROR]Union 2 nodes can not be root." << endl;
        return false;
    }
    block_t parent_index = node->parent_index;
    std::shared_ptr<Node<T>> parent_node = NewNodePointer(parent_index);
    std::shared_ptr<Node<T>> sibling_node;
    block_t sibling_index;
    block_t child_index;
    int judge_index = parent_node->Search(node->element[0]);//to judge merge left or right, see node is which son?
    int childp_index = (judge_index < 0) ? -(judge_index+1) : judge_index +1;
    if(node->is_leaf){//leaf node
        if(childp_index == 0){//node is the first son of parent, merge right!
            sibling_index = parent_node->childs_index[1];
            sibling_node = NewNodePointer(sibling_index);
            if(node->element_num + sibling_node->element_num <= order -1){//just merge
                parent_node->DeleteElement(0);//merge first one
                for(int i = 0; i < sibling_node->element_num; i++){
                    node->element[node->element_num + i] = sibling_node->element[i];
                    node->offset[node->element_num + i] = sibling_node->offset[i];
                }
                node->element_num += sibling_node->element_num;
                node->next_leaf_index = sibling_node->next_leaf_index;
                WriteNodeBackToBuffer(node);//update
                WriteNodeBackToBuffer(parent_node);
                SetEmptyBackToBuffer(sibling_node);//set sibling empty
                return true;
            }else{//can only move 1 right element to left
                node->AddElementLeafNode(sibling_node->element[0], sibling_node->offset[0]);
                sibling_node->DeleteElement(0);
                parent_node->element[0] = sibling_node->element[0];
                WriteNodeBackToBuffer(node);
                WriteNodeBackToBuffer(sibling_node);
                WriteNodeBackToBuffer(parent_node);
                return false;//not union
            }
        }else{//childp_index > 0,union with left node, delete node
            sibling_index = parent_node->childs_index[childp_index-1];
            sibling_node = NewNodePointer(sibling_index);
            if(node->element_num + sibling_node->element_num <= order -1){
                parent_node->DeleteElement(childp_index - 1);//index-1 for parent element
                for(int i = 0; i < node->element_num; i++){//move
                    sibling_node->element[sibling_node->element_num + i] = node->element[i];
                    sibling_node->offset[sibling_node->element_num + i] = node->offset[i];
                }
                sibling_node->element_num += node->element_num;
                sibling_node->next_leaf_node = node->next_leaf_node;
                WriteNodeBackToBuffer(sibling_node);//update
                WriteNodeBackToBuffer(parent_node);
                SetEmptyBackToBuffer(node);//node empty
                return true;
            }else{//move 1 element from left to right
                int element_tran = sibling_node->element[sibling_node->element_num-1];
                int offset_tran =  sibling_node->offset[sibling_node->element_num-1];
                node->AddElementLeafNode(element_tran, offset_tran);
                sibling_node->DeleteElement(element_tran);
                parent_node->Element[childp_index - 1] = node->element[0];
                WriteNodeBackToBuffer(node);
                WriteNodeBackToBuffer(sibling_node);
                WriteNodeBackToBuffer(parent_node);
                return false;//not union
            }
        }
    }else{//not leaf node
        block_t child_index;
        std::shared_ptr<Node<T>> child_node ;
        if(childp_index == 0){//like leaf, do with right sibling
            sibling_index = parent_node->childs_index[1];
            sibling_node = NewNodePointer(sibling_index);

            //non leaf merge, should insert a minvalue in parent
            node->element[node->element_num] = parent_node->element[0];
            child_index = node->childs_index[node->element_num+1] = sibling_node->childs_index[0];
            child_node = NewNodePointer(child_index);
            child_node->parent_index = node->block_index; // updata father
            WriteNodeBackToBuffer(child_node);

            if(node->element_num+1 + sibling_node->element_num+1 <= order){//not leaf node! just merge  
                parent_node->DeleteElement(0);//merge first one
                for(int i = 0; i < sibling_node->element_num; i++){
                    node->element[node->element_num + 1 + i] = sibling_node->element[i];
                    child_index = node->childs_index[node->element_num + 2 + i] = sibling_node->childs_index[1 + i];
                    child_node = NewNodePointer(child_index);
                    child_node->parent_index = node->block_index;
                    WriteNodeBackToBuffer(child_node);//update childs node
                }
                node->element_num += sibling_node->element_num +1;//no next leaf node
                WriteNodeBackToBuffer(node);//update
                WriteNodeBackToBuffer(parent_node);
                SetEmptyBackToBuffer(sibling_node);//set sibling empty
                return true;
            }else{//can only move 1 right element to left
                parent_node->element[0] = sibling_node->element[0];
                sibling_node->DeleteElement(-1);//move minvalue from sibling
                
                node->element_num ++;
                WriteNodeBackToBuffer(node);
                WriteNodeBackToBuffer(sibling_node);
                WriteNodeBackToBuffer(parent_node);
                return false;//not union
            }
        }else{//union with left son
            sibling_index = parent_node->childs_index[childp_index-1];
            sibling_node = NewNodePointer(sibling_index);
            if(node->element_num +1 + sibling_node->element_num +1 <= order){
                sibling_node->element[sibling_node->element_num] = parent_node->element[childp_index-1];//minvalue
                child_index = sibling_node->childs_index[sibling_node->element_num+1] = node->childs_index[0];
                child_node = NewNodePointer(child_index);
                child_node->parent_index = sibling_node->block_index;
                WriteNodeBackToBuffer(child_node);
                parent_node->DeleteElement(childp_index-1);//merge first one

                for(int i = 0; i < node->element_num; i++){
                    sibling_node->element[sibling_node->element_num + 1 + i] = node->element[i];
                    child_index = sibling_node->childs_index[sibling_node->element_num + 2 + i] = node->childs_index[1 + i];
                    child_node = NewNodePointer(child_index);
                    child_node->parent_index = sibling_node->block_index;
                    WriteNodeBackToBuffer(child_node);//update childs node
                }
                sibling_node->element_num += node->element_num +1;//no next leaf node
                WriteNodeBackToBuffer(sibling_node);//update
                WriteNodeBackToBuffer(parent_node);
                SetEmptyBackToBuffer(node);//set node empty
                return true;
            }else{//move 1 element from left to right
                node->childs_index[node->element_num+1] = node->childs_index[node->element_num];
                for(int i = node->element_num; i>0; i--){
                    node->element[i] = node->element[i-1];
                    node->childs_index[i] = node->childs_index[i-1];
                }
                node->element[0] = parent_node->element[childp_index-1];//last min value
                node->element_num ++;
                parent_node->element[childp_index-1] = sibling_node->element[sibling_node->element_num-1];
                child_index = node->childs_index[0] = sibling_node->childs_index[sibling_node->element_num];
                child_node = NewNodePointer(child_index);
                child_node->parent_index = node->block_index;
                WriteNodeBackToBuffer(child_node);
                sibling_node->element_num--;
                WriteNodeBackToBuffer(node);
                WriteNodeBackToBuffer(sibling_node);
                WriteNodeBackToBuffer(parent_node);
                return false;//not union
            }
        }
    }
}


//return the block offset that greater than value
template <class T>
void BPlusTree<T>::GreaterThan(T value, std::vector<block_t> &block_offset){
    std::shared_ptr<Node<T>> res_node;
    int res_index = -1;
    std::shared_ptr<Node<T>> root_node = NewNodePointer(this->root_index);
    SearchInNodeExe(root_node,value,res_node,res_index);
    int index = (res_index < 0) ? -(res_index+1) : res_index+1;//from nearest great
    for(int i = index; i < res_node->element_num; i++){
        block_offset.push_back(res_node->offset[i]);//store offset
    }
    res_index = res_node->next_leaf_index;
    while(res_index != -1){//some node are left
        res_node = NewNodePointer(res_index);
        for(int i = 0; i < res_node->element_num; i++){
            block_offset.push_back(res_node->offset[i]);
        }
        res_index = res_node->next_leaf_index;
    }
}

//return the block offset that less than value
template <class T>
void BPlusTree<T>::LessThan(T value, std::vector<block_t> &block_offset){
    std::shared_ptr<Node<T>> res_node;
    int res_index = -1;
    std::shared_ptr<Node<T>> root_node = NewNodePointer(this->root_index);
    SearchInNodeExe(root_node,value,res_node,res_index);
    int index = (res_index < 0) ? -(res_index+1) : res_index;//toward nearest less
    
    block_t corruent_index = this->first_leaf_index;
    std::shared_ptr<Node<T>> corruent_node;
    while(corruent_index != res_node->block_index && corruent_index != -1){//not end or greater
        corruent_node = NewNodePointer(corruent_index);
        for(int i = 0; i < corruent_node->element_num; i++){
            block_offset.push_back(corruent_node->offset[i]);
        }
        corruent_index = corruent_node->next_leaf_index;
    }
    if(corruent_index != -1){
        for(int i = 0; i < index; i++){
            block_offset.push_back(corruent_node->offset[i]);//store offset
        }
    }
}

//clear the block information
template <class T>
void BPlusTree<T>::SetEmptyBackToBuffer(std::shared_ptr<Node<T>> &node){
    node->element_num = 0;
    biter temp = GetBlockOffset(node->block_index);
    buffer_manager.setEmptyBlock(temp);
    // (*temp)->data[0] = 0;
    // (*temp)->byte_offset = 0;
    // (*temp)->block_dirty_bit = 1;
}
 


#endif