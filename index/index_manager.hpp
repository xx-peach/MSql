#ifndef _INDEX_MANAGER_H_
#define _INDEX_MANAGER_H_
#include "bplus_tree.hpp"
#include "../config.hpp"
#include "../utils/attribute.hpp"
#include "../utils/fieldType.hpp"
#include <map>
#include <fstream>
using namespace std;

class IndexManager{
    public:
        IndexManager();//ctor
        ~IndexManager();//dtor
        
        //create index
        Result create_index(const string &table_name, const string &attribute_name, FieldType type);
        
        //drop the index on the table
        Result drop_index(const string &table_name, const string &attribute_name, FieldType type);

        // find element
        Result find_element(const string &table_name, const string &attribute_name, FieldType type, const char* value, std::vector<block_t> &block_index);

        //insert index
        // Result insert_index(const std::string &table_name, const string &attribute_name, FieldType type, const std::string &data, int block_index);

        //cmp result
        Result compare(const string &table_name, const string &attribute_name, FieldType type, const char* value, std::vector<block_t> &block_index, CMP cmp);
        
        //is the index on this type exist
        bool is_index_exist(string file_name, FieldType type);
        

    private:
        //some map of index
        map<string, shared_ptr<BPlusTree<int>>> int_index;//one string map a ptr to b+ tree
        map<string, shared_ptr<BPlusTree<float>>>float_index;
        map<string, shared_ptr<BPlusTree<string>>> string_index;
        map<string, int> string_index_len;
        map<string, block_t> int_index_start_block;
        map<string, block_t> float_index_start_block;
        map<string, block_t> string_index_start_block;

        //get the order(n) of the b+ tree
        int get_order(FieldType type);

        //new index file in disks
        void new_file(string file_name);

        //index file or block access for convenience
        fiter index_getFile(string file_name){
            fiter file_iter = buffer_manager.getFile(file_name,1,sizeof(int),1);//last 2 is not sure
            return file_iter;
        }
        biter index_getFileBlock(string file_name){
            biter block_iter = buffer_manager.getFileBlock(file_name,1,sizeof(int),1);//last 2 is not sure
            return block_iter;
        }
        //functions used by cmp function
        Result greater_than(const string &table_name, const string &attribute_name, FieldType type, const char* value, bool is_equal, std::vector<block_t> &block_index);
        Result less_than(const string &table_name, const string &attribute_name, FieldType type, const char* value, bool is_equal, std::vector<block_t> &block_index);
};


//new index file in disks
void IndexManager::new_file(string file_name){
    string file_path = INDEX_DIR + file_name + INDEX_SUF;
    fstream newfile;
    newfile.open(file_path,  ios::binary | ios::out );
}

//get the order(n) of the b+ tree
int IndexManager::get_order(FieldType type){
    int order = 0;
    switch(type.get_type()){
        //max: (block_size - (is_leaf + num + parent_index + next_leaf_index)),left block_t and int or 2 block_t
        case CHAR:{
            order = (block_size - (sizeof(char) + sizeof(int) + sizeof(block_t)*2)) / (type.get_length() + sizeof(int)) -1 ;break;
        }//one sizeof(int) for exception
        case INT:{
            order = (block_size - (sizeof(char) + sizeof(int) + sizeof(block_t)*2)) / (sizeof(int)*2) -1 ;break;
        }
        case FLOAT:{
            order = (block_size - (sizeof(char) + sizeof(int) + sizeof(block_t)*2)) / (sizeof(float) + sizeof(int)) -1 ;;break;
        }
        default:;
    }
    return order;
}

bool IndexManager::is_index_exist(string name, FieldType type){
    bool result = false;
    switch(type.get_type()){
        case CHAR:{
            result = (string_index.count(name)!=0);break;//there is index in map
        }
        case INT:{
            result = (int_index.count(name)!=0);break;//there is index in map
        }
        case FLOAT:{
            result = (float_index.count(name)!=0);break;//there is index in map        
        }
        default:;
    }
    return result;
}


//create index
Result IndexManager::create_index(const string &table_name, const string &attribute_name, FieldType type){
    new_file(table_name);//table->file
    fiter file = index_getFile(table_name);
    biter nonused_block = index_getFileBlock(table_name);
    char* cdata = (*nonused_block)->data;
    block_t block_index = (*nonused_block)->block_index;

    *((char*)cdata) = 1;//is not leaf, 3?
    *((int*)(cdata + sizeof(char))) = 0;//num
    *((block_t*)(cdata + sizeof(char) + sizeof(int))) = -1;//not father
    
    string map_index = table_name+"/"+attribute_name;
    if(is_index_exist(table_name, type)){
        return BPT_ALREADY_EXSIST;//already has this index
    }else{
        int order = get_order(type);
        switch(type.get_type()){
            case CHAR:{
                string_index[map_index] = make_shared<BPlusTree<string>>(table_name, order, type.get_length());//index node
                string_index_start_block[map_index] = block_index;//start block(root)
                string_index_len[map_index] = type.get_length();//string length
                break;
            }
            case INT:{
                int_index[map_index] = make_shared<BPlusTree<int>>(table_name, order, sizeof(int));
                int_index_start_block[map_index] = block_index;
                break;
            }
            case FLOAT:{
                float_index[map_index] = make_shared<BPlusTree<float>>(table_name, order, sizeof(float));
                float_index_start_block[map_index] = block_index;
                break;
            }
            default:
                return WRONG_TYPE;
        }
    }
    return SUCCESS;
}

//drop index
//maybe need not to change the buffer content, can directly erase it from maps
Result IndexManager::drop_index(const string &table_name, const string &attribute_name, FieldType type){
    fiter file = index_getFile(table_name);
    string map_index = table_name+"/"+attribute_name;
    block_t start_block_index;
    if(is_index_exist(map_index,type)){//exist
        switch(type.get_type()){
            case CHAR:{
                string_index.erase(map_index);//clear it from the index
                string_index_len.erase(map_index);
                start_block_index = string_index_start_block[map_index];
                string_index_start_block.erase(map_index);
                biter block = buffer_manager.getBlockbyOffset(file,start_block_index);//get block
                buffer_manager.setEmptyBlock(block);
                break;
            }
            case INT:{
                int_index.erase(map_index);//clear it from the index
                start_block_index = int_index_start_block[map_index];
                int_index_start_block.erase(map_index);
                biter block = buffer_manager.getBlockbyOffset(file,start_block_index);//get block
                buffer_manager.setEmptyBlock(block);
                break;
            }
            case FLOAT:{
                float_index.erase(map_index);//clear it from the index
                start_block_index = float_index_start_block[map_index];
                float_index_start_block.erase(map_index);
                biter block = buffer_manager.getBlockbyOffset(file,start_block_index);//get block
                buffer_manager.setEmptyBlock(block);
                break;
            }
            default:{
                return WRONG_TYPE;
            }
        }
        return SUCCESS;
    }else{
        return NO_INDEX;
    }
}

Result IndexManager::find_element(const string &table_name, const string &attribute_name, FieldType type, const char* value, std::vector<block_t> &block_index){
    fiter file = index_getFile(table_name);
    string map_index = table_name+"/"+attribute_name;
    Result flag = SUCCESS;
    block_t find_index;
    block_index.clear();//initial result
    if(is_index_exist(map_index,type)){//exist
        switch(type.get_type()){
            case CHAR:{
                find_index = string_index[map_index]->Search(value);
                break;
            }
            case INT:{
                find_index = int_index[map_index]->Search(atoi(value));
                break;
            }
            case FLOAT:{
                find_index = float_index[map_index]->Search(atof(value));
                break;
            }
            default:{
                return WRONG_TYPE;
            }
        }
        if(find_index < 0)flag = NO_SUCH_ELEMENT;//not found
        else block_index.push_back(find_index);//found: add result
    }else{
        flag = NO_INDEX;
    }
    return flag;
}

Result IndexManager::greater_than(const string &table_name, const string &attribute_name, FieldType type, const char* value, bool is_equal, std::vector<block_t> &block_index){
    fiter file = index_getFile(table_name);
    string map_index = table_name+"/"+attribute_name;
    Result flag = SUCCESS;
    block_t find_index;
    block_index.clear();//initial result

    if(!is_index_exist(map_index,type)){//not exist
        flag = NO_INDEX;
    }else{//exist
        if(is_equal){//is eqaul -> maybe 1 more value
            find_element(table_name,attribute_name,type,value,block_index);
        }
        switch(type.get_type()){//always do
            case INT:   {   int_index[map_index]->GreaterThan(atoi(value),block_index);     break;}
            case FLOAT: {   float_index[map_index]->GreaterThan(atof(value),block_index);   break;}
            case CHAR:  {   string_index[map_index]->GreaterThan(value,block_index);        break;}
            default: {return WRONG_TYPE;}
        }
    }
    return flag;
}

Result IndexManager::less_than(const string &table_name, const string &attribute_name, FieldType type, const char* value, bool is_equal, std::vector<block_t> &block_index){
    fiter file = index_getFile(table_name);
    string map_index = table_name+"/"+attribute_name;
    Result flag = SUCCESS;
    block_t find_index;
    block_index.clear();//initial result

    if(!is_index_exist(map_index,type)){//not exist
        flag = NO_INDEX;
    }else{//exist
        switch(type.get_type()){//always do
            case INT:   {   int_index[map_index]->LessThan(atoi(value),block_index);    break;}
            case FLOAT: {   float_index[map_index]->LessThan(atof(value),block_index);  break;}
            case CHAR:  {   string_index[map_index]->LessThan(value,block_index);       break;}
            default: {return WRONG_TYPE;}
        }
        if(is_equal){//is eqaul -> maybe 1 more value
            find_element(table_name,attribute_name,type,value,block_index);
        }
    }
    return flag;
}


//compare result support
/*	EQUAL,
	NOT_EQUAL,
	GREATER,
	GREATER_EQUAL,
	LESS,
	LESS_EQUAL,
    ERROR_CMP*/
Result IndexManager::compare(const string &table_name, const string &attribute_name, FieldType type, const char* value, std::vector<block_t> &block_index, CMP cmp){
    Result flag1 = SUCCESS, flag2 = SUCCESS;
    switch(cmp){
        case EQUAL:{
            return (find_element(table_name,attribute_name,type,value,block_index));
        }
        case NOT_EQUAL:{
            flag1 = less_than(table_name,attribute_name,type,value,false,block_index);
            flag2 = greater_than(table_name,attribute_name,type,value,false,block_index);
            if(flag1 !=SUCCESS)return flag1;//return problem type
            else return flag2;
        }
        case GREATER:{
            return greater_than(table_name,attribute_name,type,value,false,block_index);
        }
        case GREATER_EQUAL:{
            return greater_than(table_name,attribute_name,type,value,true,block_index);
        }
        case LESS:{
            return less_than(table_name,attribute_name,type,value,false,block_index);
        }
        case LESS_EQUAL:{
            return less_than(table_name,attribute_name,type,value,true,block_index);
        }
        default: return ERROR_CMP_VALUE;            //input error cmp value
    }
}

#endif