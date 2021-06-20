#include "./buffer.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

/************************************************
 * Implement the member function of Block class *
 ************************************************/
/**
 * @prototype: Block();
 * @function: default constructor
 **/
Block::Block() {
    data = new char[block_size];
    memset(data, '\0', block_size);
    block_file = nullptr;
    block_dirty_bit = 0;
    block_index = 0;
    byte_offset = 0;
    locked = false;
    use_times = 0;
}

/**
 * @prototype: Block( block_t _index, char* _data, block_t _dirty=0, block_t _num=0, block_t _times=0, bool _lock=false, FileTable* _file=nullptr );
 * @function: parameterized constructor
 **/
Block::Block( block_t _index, char* _data, FileTable* _file, block_t _dirty, block_t _num, block_t _times, bool _lock )
            : block_index(_index), data(_data), block_file(_file), block_dirty_bit(_dirty), byte_offset(_num), use_times(_times), locked(_lock) {}

/**
 * @prototype: ~FileTable();
 * @function: destructor
 **/
Block::~Block() {}

/**
 * @prototype: pin();
 * @function: lock the current block, so it can not be replaced
 * @return: void
 **/
void Block::pin() {
    locked = true;
}

/**
 * @prototype: unpin();
 * @function: unlock the current block, so it can be replaced
 * @return: void
 **/
void Block::unpin() {
    locked = false;
}

/**
 * @prototype: read();
 * @function: read data into block from disk, content provided by recordManager
 * @return: void
 **/
void Block::read() {
    // generate the file path
    string file_path;
    if ( !block_file->file_type ) file_path = TABLE_DIR + block_file->file_name + TABLE_SUF;
    else file_path = INDEX_DIR + block_file->file_name + INDEX_SUF;
    // open the target file
    ifstream inFile( file_path, ios::in | ios::binary );
    if ( inFile.is_open() ) {
        // read in data from file
        inFile.seekg( block_size * block_index, ios::beg ); // locate file position by offset
        inFile.read( data, block_size );                    // read in the data, at most block_size bytes
        // update block header information
        byte_offset += inFile.gcount();
        use_times += 1;
        // close the file
        inFile.close();
    }
    else cout << "Block::read error, open file " << block_file->file_name << " fail" << endl;
}

/**
 * @prototype: write();
 * @function: write data into the current block, content provided by recordManager
 * @return: void
 **/
bool Block::write( const char* d, int l ) {
    if ( l + byte_offset > block_size || l > block_size ) {
        cout << "Block::write error, offset = " << byte_offset << ", block overflow" << endl;
        return false;
    }
    else {
        memcpy(data+byte_offset, d, l);     // append the new record to the block
        byte_offset += l;                   // change the offset of the block
        block_dirty_bit = 1;                // assert the dirty bit which denotes modification on this block
        use_times += 1;                     // increment the use_time variable
        return true;
    }
}
/**
 * @prototype: writecover();
 * @function: clean the data in current block and write data into the it
 * @return: bool
 **/
void Block::writecover( const char* d, int l ) {
    memset(data, 0, block_size);
    byte_offset = 0;
    write(d, l);
}

/**
 * @function: used for test
 **/
void Block::showInfo() {
    cout << data << endl;
}


/****************************************************
 * Implement the member function of FileTable class *
 ****************************************************/
/**
 * @prototype: FileTable();
 * @function: default constructor
 **/
FileTable::FileTable() {}

/**
 * @prototype: FileTable( string _name, file_t _type, file_t _len, file_t _amount=0 );
 * @function: parameterized constructor
 **/
FileTable::FileTable( string _name, file_t _type, file_t _len, file_t _amount )
                    : file_name(_name), file_type(_type), record_length(_len), record_amount(_amount) {}

/**
 * @prototype: ~FileTable();
 * @function: destructor
 **/
FileTable::~FileTable() {
    blockList.clear();
}



/********************************************************
 * Implement the member function of BufferManager class *
 ********************************************************/
/**
 * @prototype: BufferManager();
 * @function: default constructor
 **/
BufferManager::BufferManager() {
    used_block = 0;
    total_file = 0;
}

/**
 * @prototype: ~BufferManager();
 * @function: destructor
 **/
BufferManager::~BufferManager() {
    close();
    fileList.clear();
}

/**
 * @prototype: getFile( string name, file_t type, file_t len );
 * @function: find a file in the file list, if not find, add it to the list
 * @return: filelist::iterator
 **/
fiter BufferManager::getFile( string name, file_t type, file_t len, file_t amount ) {
    fiter fit;
    bool flag = false;
    // iterate through the list to find the wanted file
    for ( fit = fileList.begin(); fit != fileList.end(); fit++ ) {
        if ( (*fit)->file_name == name && (*fit)->file_type == type ) { flag = true; break; }
        else continue;
    }
    // find the file in the filelist, simply return the iterator
    if ( flag ) return fit;
    // can not find the file, then new a file pointer and add it to the list
    else {
        FileTable* new_file = new FileTable( name, type, len, amount );
        fileList.push_back( new_file );
        ++total_file;
        return --fileList.end();
    }
}

/**
 * @function: return the number of blocks in the specific file
 * @return: int
 **/
int BufferManager::getBlockNums( const fiter file ) {
    return (*file)->blockList.size();
}

/**
 * @function: remove a specific block in one specidied file
 * @return: void
 **/
void BufferManager::removeBlock( const fiter file, block_t index ) {
    biter bit;
    bool flag = false;
    // iterate through the list to find the erase block
    for ( bit = (*file)->blockList.begin(); bit != (*file)->blockList.end(); bit++ ) {
        if ( (*bit)->block_index == index ) {
            setEmptyBlock(bit);
            (*file)->blockList.erase( bit );    // erase the block if find
            flag = true;                        // set flag on
            break;
        }
        else continue;
    }
    // if not find the erase block, then throw an error
    if ( !flag ) cout << "BufferManager::removeBlock error, erase block not exists";
}

/**
 * @prototype: getBlock( const fiter file );
 * @function: find an available block in the pool to link to *file, if not find, then apply FIFO to replace a block
 * @return: blocklist::iterator
 **/
biter BufferManager::getBlock( const fiter file ) {
    // if there are still free blocks in the block pool
    biter bit;
    if ( used_block < block_numb ) {
        int tmpIdx = used_block;
        while ( true ) {
            if ( tmpIdx >= block_numb ) tmpIdx = 0;
            if ( block_pool[tmpIdx].block_file == nullptr ) break;
            else tmpIdx++;
        }
        block_pool[tmpIdx].block_index = (*file)->blockList.size(); // index start from 0
        block_pool[tmpIdx].block_file = *file;
        (*file)->blockList.push_back( &block_pool[tmpIdx] );
        ++used_block;
        bit = --(*file)->blockList.end();
    }
    // if there are no free blocks left, then we must apply FIFO to replace a block
    else {
        int idx = replace_block_index;
        while ( true ) {
            idx++;
            // resume the process if already reached the last block in pool
            if ( idx >= block_numb ) idx = 0;
            // if the block is unlocked, then replace it
            if ( !block_pool[idx].locked ) {
                // remove the block from its original file
                writeBack( block_pool[idx] );
                removeBlock( file, block_pool[idx].block_index );
                // initialize the block
                block_pool[idx].block_index = (*file)->blockList.size();
                block_pool[idx].block_file = *file;
                (*file)->blockList.push_back( &block_pool[used_block] );
                bit = --(*file)->blockList.end();
            }
            // if the block is locked, then search for the next
            else continue;
        }
    }
    return bit;
}

/**
 * @function: find a block in the file's block list, if not find, add it to the list
 * @return: blocklist::iterator
 **/
biter BufferManager::getBlockbyOffset( const fiter file, block_t index ) {
    biter bit;
    bool flag = false;
    // iterate through the list to find the erase block
    for ( bit = (*file)->blockList.begin(); bit != (*file)->blockList.end(); bit++ ) {
        if ( (*bit)->block_index == index ) { flag = true; break; }
        else continue;
    }
    // if not find the erase block, then throw an error
    if ( flag ) return bit;
    else {
        cout << "BufferManager::getBlockbyOffset error, block not exists, create new one" << endl;
        return (*file)->blockList.end();
    }
}


/**
 * @prototype: getFileBlock( string name, file_t type, file_t len, block_t index );
 * @function: a combination of both getFile() and getBlock()
 * @return: blocklist::interator
 **/
biter BufferManager::getFileBlock( string name, file_t type, file_t len, file_t amount ) {
    fiter file = getFile( name, type, len, amount );
    biter block = getBlock( file );
    return block;
}

/**
 * @prototype: writeBack( Block block );
 * @function: write back the block's data into disk
 * @return: void
 **/
void BufferManager::writeBack( Block block ) {
    if ( !block.block_dirty_bit ) return;
    else {
        // get the file path
        string file_path;
        if ( !block.block_file->file_type ) file_path = TABLE_DIR + block.block_file->file_name + TABLE_SUF;
        else file_path = INDEX_DIR + block.block_file->file_name + INDEX_SUF;
        ofstream outFile( file_path, ios::binary | ios::app );
        // write the modified block into the disk
        if ( outFile.is_open() ) {
            // find the position to write in
            int offset = block_size * block.block_index;
            outFile.seekp( offset, ios::beg );
            outFile.write( block.data, block.byte_offset );
            outFile.close();
        }
        else cout << "BufferManager::writeBack error, " << block.block_file->file_name << " not find";
    }
}

/**
 * @prototype: writeBack( biter block );
 * @function: write back the block's data into disk
 * @return: void
 **/
void BufferManager::writeBack( biter block ) {
    if ( !(*block)->block_dirty_bit ) return;
    else {
        // get the file path
        string file_path;
        if ( !(*block)->block_file->file_type ) file_path = TABLE_DIR + (*block)->block_file->file_name + TABLE_SUF;
        else file_path = INDEX_DIR + (*block)->block_file->file_name + INDEX_SUF;
        ofstream outFile( file_path, ios::binary | ios::app );
        // write the modified block into the disk
        if ( outFile.is_open() ) {
            // find the position to write in
            int offset = block_size * (*block)->block_index;
            outFile.seekp( offset, ios::beg );
            outFile.write( (*block)->data, (*block)->byte_offset );
            outFile.close();
        }
        else cout << "BufferManager::writeBack error, " << (*block)->block_file->file_name << " not find";
    }
}

/**
 * @function: set block empty
 * @return: void
 **/
void BufferManager::setEmptyBlock(biter block){
    memset((*block)->data, '\0', block_size);
    (*block)->block_file = nullptr;
    (*block)->block_dirty_bit = 0;
    (*block)->byte_offset = 0;
    (*block)->use_times = 0;
}

/**
 * @function: remove a specific file in the fileList
 * @return: void
 **/
void BufferManager::removeFile( const fiter file ) {
    closeFile(file);
    for ( fiter fit = fileList.begin(); fit != fileList.end(); ++fit ) {
        if ( ((*fit)->file_name == (*file)->file_name) && ((*fit)->file_type == (*file)->file_type) ) {
            fileList.erase(file);
            break;
        }
    }
}

/**
 * @prototype: closeFile( fiter file );
 * @function: write back all the blocks in a specific file back into disk
 * @return: void
 **/
void BufferManager::closeFile( fiter file ) {
    biter bit;
    for ( bit = (*file)->blockList.begin(); bit != (*file)->blockList.end(); bit++ ) {
        writeBack(bit);
        setEmptyBlock(bit);
        --used_block;
    }
    --total_file;
}

/**
 * @prototype: close();
 * @function: close all the files in the bufferManager
 * @return: void
 **/
void BufferManager::close() {
    fiter fit;
    for ( fit = fileList.begin(); fit != fileList.end(); ++fit ) {
        closeFile(fit);
    }
}

/**
 * @function: find a block in the file's block list, if not find, add it to the list
 * @return: blocklist::iterator
 **/
biter BufferManager::getBlockbyOffsetSave( const fiter file, block_t index ) {
    biter bit;
    bool flag = false;
    // iterate through the list to find the erase block
    for ( bit = (*file)->blockList.begin(); bit != (*file)->blockList.end(); bit++ ) {
        if ( (*bit)->block_index == index ) { flag = true; break; }
        else continue;
    }
    // if not find the erase block, then throw an error
    if ( flag ) return bit;
    else {
        return  (getBlock(file));
    }
}

//see the block list
void BufferManager::OutputBlockList(const fiter file){
    biter bit;
    cout << endl << "block list:" << endl;
    for ( bit = (*file)->blockList.begin(); bit != (*file)->blockList.end(); bit++ ) {
        cout << (*bit)->block_index << ", ";
    }
    cout << endl;
}
