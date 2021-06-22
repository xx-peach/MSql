#include "bplus_tree.hpp"
#include "../buffer/buffer.hpp"
#include <time.h>
using namespace std;

int main(){
    BufferManager buffer_manager;
    string table_name = "table_name";
    int size_of_type = sizeof(int);
    int order = (block_size - (sizeof(char) + sizeof(int) + sizeof(block_t)*2)) / (size_of_type + sizeof(int)) -1 ;
    BPlusTree<int> bpt(buffer_manager, table_name, order,size_of_type);
    int insert_size = 10000;
    //insert test
    // bpt.LevelOrderOutput();
    time_t begin_t = clock();
    for(int i=0; i<insert_size; i++){
        bpt.InsertElement(i,i+10);
    }
    time_t finish_t = clock();
    cout << "using time = " <<(double )(finish_t - begin_t )/1000 <<endl;

    // bpt.LevelOrderOutput();
    // bpt.InsertElement(5,15);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(3,13);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(10,20);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(9,19);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(8,18);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(7,7);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(6,6);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(5,5);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(4,4);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(15,25);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(16,26);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(17,27);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(18,28);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(19,29);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(13,23);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(11,21);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(19,29);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(20,30);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(21,31);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(22,32);
    // bpt.LevelOrderOutput();
    // bpt.InsertElement(14,24);
    // bpt.LevelOrderOutput();

    // //delete test
    // bpt.DeleteElement(19);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(18);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(17);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(16);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(15);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(14);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(13);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(12);
    // bpt.LevelOrderOutput();
    // bpt.DeleteElement(11);
    // bpt.LevelOrderOutput();
    system("pause");
    return 0;
}

