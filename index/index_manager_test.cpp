#include <iostream>
#include "index_manager.hpp"
#include "time.h"

using namespace std;
int main(){
    // std::cout << "xt tql "<<std::endl;
    BufferManager buffer_manager;
    IndexManager index_manager(buffer_manager);
    FieldType field_type(CHAR,40);
    const string table_name = "abc";
    const string attribute_name = "age";
    int test_size = 10000;

    vector<block_t> find_index;

    
    time_t begin_t = clock();
    index_manager.create_index(table_name,attribute_name,field_type);

    for(int i=1; i<=test_size; i++){
        index_manager.find_element(table_name,attribute_name,field_type,(char*)((to_string(i+1000)).c_str()),find_index);
        index_manager.insert_index(table_name,attribute_name,field_type,to_string(i+1000),(i+1000));
    }
    
    time_t finish_t = clock();
    index_manager.show_index(table_name,attribute_name,field_type);
    cout << "using time = " <<(double )(finish_t - begin_t )/1000 <<endl;


    // const string data = "1";
    // index_manager.create_index(table_name,attribute_name,field_type);
    // for(int i=1; i<=100; i++){
    //     index_manager.insert_index(table_name,attribute_name,field_type,to_string(i),(i+10));
    // }
    // index_manager.show_index(table_name,attribute_name,field_type);
    // // for(int i=100; i>=1; i--){
    // index_manager.insert_index(table_name,attribute_name,field_type,to_string(50),(50+10));//test more
    // // }
    
    // index_manager.find_element(table_name,attribute_name,field_type,"50",find_index);
    // cout << "find index of 50: "; for(int i=0; i< find_index.size(); ++i)cout << find_index[i] << ", "; cout << endl;

    // index_manager.compare(table_name,attribute_name,field_type,"50",find_index,GREATER);
    // cout << "find index > 50 : "; for(int i=0; i< find_index.size(); ++i)cout << find_index[i] << ", "; cout << endl;

    // index_manager.drop_index(table_name,attribute_name,field_type);
    // if(index_manager.show_index(table_name,attribute_name,field_type) == SUCCESS){
    //     cout << "index exist\n";
    // }else{
    //     cout << "index not exist\n";
    // }
    system("pause");
    return 0;
}