#ifndef _INDEX_MANAGER_H_
#define _INDEX_MANAGER_H_
#include "./bplus_tree.hpp"
#include "../config.hpp"
#include "../utils/attribute.hpp"
#include "../utils/fieldType.hpp"
#include <map>
#include <fstream>
using namespace std;

class IndexManager{
    public:
        IndexManager(BufferManager& buffer_manager);     // ctor
        ~IndexManager();    // dtor
        
        //create index, has called insert index to get a full b+ tree
        Result create_index(const string &table_name, const string &attribute_name, FieldType type);
        
        //drop the index on the table
        Result drop_index(const string &table_name, const string &attribute_name, FieldType type);

        // find element
        Result find_element(const string &table_name, const string &attribute_name, FieldType type, char* value, std::vector<block_t> &block_index);

        //insert index
        Result insert_index(const std::string &table_name, const string &attribute_name, FieldType type, const std::string &data, int block_index);

        //cmp result
        Result compare(const string &table_name, const string &attribute_name, FieldType type, char* value, std::vector<block_t> &block_index, CMP cmp);
        
        //is the index on this type exist
        bool is_index_exist(string file_name, FieldType type);
        
        //print the b+ tree for test
        Result show_index(const std::string &table_name, const string &attribute_name, FieldType type){
            Result result = SUCCESS;
            string map_index = table_name+"/"+attribute_name;
            if(is_index_exist(map_index,type)){
                cout <<"order of tree = ";
                if(type.get_type()==INT){
                    cout << int_index[map_index]->order << endl;
                    int_index[map_index]->LevelOrderOutput();
                }else if(type.get_type()==FLOAT){
                    cout << float_index[map_index]->order << endl;
                    float_index[map_index]->LevelOrderOutput();
                }else if(type.get_type()==CHAR){
                    cout << string_index[map_index]->order << endl;
                    string_index[map_index]->LevelOrderOutput();
                }
            }else{
                result = NO_INDEX;
            }
            return result;
        }

    private:
        BufferManager& buffer_manager;
        //some map of index
        map<string, shared_ptr<BPlusTree<int>>> int_index;//one string map a ptr to b+ tree
        map<string, shared_ptr<BPlusTree<float>>>float_index;
        map<string, shared_ptr<BPlusTree<char*>>> string_index;
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
        Result greater_than(const string &table_name, const string &attribute_name, FieldType type, char* value, bool is_equal, std::vector<block_t> &block_index);
        Result less_than(const string &table_name, const string &attribute_name, FieldType type, char* value, bool is_equal, std::vector<block_t> &block_index);
};

#endif