/*
 * MSql: buffer/buffer.hpp 
 * 
 * This file declares class BufferManager and other related classes
 * 
 */

#ifndef _BUFFER_H_
#define _BUFFER_H_

#include <list>
#include <string>
#include "../config.hpp"

using namespace std;

static int replace_block_index = -1;

/* Declaration of three needed class */
class Block;
class FileTable;
class BufferManager;

/* All the typedef */
typedef int file_t;                 // typedef for file class
typedef list<FileTable*> filelist;
typedef filelist::iterator fiter;
typedef int block_t;                // typedef for block class
typedef list<Block*> blocklist;
typedef blocklist::iterator biter;

/* Definition of block class storing the block information */
class Block {
private:
    bool locked;                    // false->unlocked, true->locked
    block_t use_times;              // the use times of the block
    FileTable* block_file;          // the file that this block belongs to
public:
    char* data;                     // the char array to store the data
    block_t block_dirty_bit;        // 0->false, 1->true, it is a dirty block which needs to be write back
    block_t byte_offset;            // the total number of byte in the block
    block_t block_index;            // the index of the block in the blockList of a specific file

    friend class FileTable;         // friend class FileTable
    friend class BufferManager;     // firend class BufferManager

    Block();
    Block( block_t _index, char* _data, FileTable* _file, block_t _dirty=0, block_t _num=0, block_t _times=0, bool _lock=false );
    ~Block();

    /**
     * @function: lock the current block, so it cannot be replaced
     **/
    void pin();
    /**
     * @function: unlock the current block, so it can be replaced
     **/
    void unpin();
    /**
     * @function: read data into block from disk
     **/
    void read();
    /**
     * @function: write data into the current block
     **/
    bool write( const char* d, int l );
    /**
     * @function: clean the data in current block and write data into the it
     **/
    void writecover(const char* d, int l);
    /**
     * @function: used for test
     **/
    void showInfo();
};

/* Definition of file class storing the file information */
class FileTable {
private:
    string file_name;               // the name of the file
    file_t file_type;               // 0->data file, 1->index file
    file_t record_length;           // the length of each record in the file
    file_t record_amount;           // the total number of records in the file
public:
    blocklist blockList;            // the list that stores all the pointers of used by this file, initially empty
    friend class Block;
    friend class BufferManager;

    FileTable();
    FileTable( string _name, file_t _type, file_t _len, file_t _amount=0 );
    ~FileTable();
};

/* Definition of buffermanager class manage the data in buffer */
class BufferManager {
private:
    int total_file;                 // store the total number of files
    int used_block;                 // store the total number of blocks that have been used
    Block block_pool[block_numb];   // the pool of all blocks, including both used and unused blocks
public:
    filelist fileList;              // the list that stores all the file pointers, initially empty
    friend class Block;
    friend class FileTable;

    BufferManager();
    ~BufferManager();

    /**
     * @function: find a file in the file list, if not find, add it to the list
     * @return: filelist::iterator
     **/
    fiter getFile( string name, file_t type, file_t len, file_t amount );

    /**
     * @function: return the number of blocks in the specific file
     * @return: int
     **/
    int getBlockNums( const fiter file );

    /**
     * @function: remove a specific block in one specidied file
     * @return: void
     **/
    void removeBlock( const fiter file, block_t index );

    /**
     * @function: find a block in the file's block list, if not find, add it to the list
     * @return: blocklist::iterator
     **/
    biter getBlock( const fiter file );

    /**
     * @function: find a block in the file's block list, if not find, add it to the list
     * @return: blocklist::iterator
     **/
    biter getBlockbyOffset( const fiter file, block_t index );

    /**
     * @function: find a block in the file's block list, if not find, add it to the list
     * @return: blocklist::iterator
     **/
    biter getBlockbyOffsetSave( const fiter file, block_t index );
    /**
     * @function: find an available block in the pool to link to *file, if not find, then apply FIFO to replace a block
     * @return: blocklist::iterator
     **/
    biter getFileBlock( string name, file_t type, file_t len, file_t amount );

    /**
     * @function: write back the block's data into disk
     * @return: void
     **/
    void writeBack( biter block );

    /**
     * @function: write back the block's data into disk
     * @return: void
     **/
    void writeBack( Block block );

    /**
     * @function: set block empty
     * @return: void
     **/
    void setEmptyBlock(biter block);

    /**
     * @function: remove a specific file in the fileList
     * @return: void
     **/
    void removeFile( const fiter file );

    /**
     * @function: close a file, destroy all the blocks in that file(write back at the same time)
     * @return: void
     **/
    void closeFile( fiter file );

    /**
     * @function: close all files
     * @return: void
     **/
    void close();

    //for test
    void OutputBlockList(const fiter file);
};

#endif
