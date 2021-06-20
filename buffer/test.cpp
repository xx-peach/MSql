#include <iostream>
#include <fstream>
#include "./buffer.hpp"
using namespace std;

int main() {
    BufferManager buffer;
    // Get the first block
    biter bit1 = buffer.getFileBlock("test", 0, 5, 5);
    // cout << "the block index is: " << (*bit1)->block_index;
    (*bit1)->read();
    (*bit1)->write("cover1",6);
    // (*bit)->showInfo();
    // Get the second block
    biter bit2 = buffer.getFileBlock("test", 0, 5, 5);
    // cout << "the block index is: " << (*bit2)->block_index;
    (*bit2)->read();
    (*bit2)->write("cover2",6);
    // (*bit2)->showInfo();
    // Get the third block
    biter bit3 = buffer.getFileBlock("test", 0, 5, 5);
    // cout << "the block index is: " << (*bit2)->block_index;
    (*bit3)->read();
    (*bit3)->write("cover3",6);
    
    system("pause");
    return 0;
}