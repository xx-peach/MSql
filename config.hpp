/*
 * MSql: config.hpp 
 * 
 * This file defines some basic config parameters
 * 
 */ 
#pragma once

#ifndef __CONFIG_H__
#define __CONFIG_H__

#include <cstddef> 
using namespace std;

/* Define some prompt information for ui */
const static char prompt_str_1[] = ">>> ";
const static char prompt_str_2[] = "... ";

/* Define some constant variable for buffer */
static const size_t block_size = 4096;
static const size_t block_numb = 1024;
static const size_t buffer_size = block_size * block_numb;
static const size_t file_size = 100003;

/* path for directory db_files for code in one layer of folder */
#define DB_FILES "../db_files/"
#define CAT_TABLE DB_FILES "table/table.cat"
#define CAT_INDEX DB_FILES "index/index.cat"
#define TEST_DIR  DB_FILES "test/"
#define TABLE_DIR DB_FILES "table/"
#define TABLE_SUF ".tab"
#define INDEX_DIR DB_FILES "index/"
#define INDEX_SUF ".idx"

/**
 * Purpose：For function with int as its return value, providing the execution result of the function
 * Note: The specific value does not matter as long as it belongs to the corresponding interval and does not conflict with others
 * Global:         [-20,0]
 * Interpreter:    [-40,-20)
 * API:            [-60,-40)
 * Record:         [-80,-60)
 * Index:          [-100,-80)
 * Catalog:        [-120,-100)
 * Buffer:         [-140,-120)
 */
enum Result {
    // Global
    SUCCESS = 0,
    ERROR = -1, 
    
    // Interpreter
    CHAR_LENGTH_ERROR = -11,
    ATTRIBUTE_ERROR = -12,
    PRIMARY_KEY_NOT_EXIST = -13,
    ON_NOT_EXIST = -14,
    EXPECTING_TABLE_OR_INDEX = -15,
    STAR_NOT_EXIST = -16,
    FROM_NOT_EXIST = -17,
    WHERE_NOT_EXIST = -18,
    LOGICTYPE_ERROR = -19,
    AND_NOT_EXIST = -20,
    INTO_NOT_EXIST = -21,
    VALUES_NOT_EXIST = -22,
    STATEMENT_ERROR = -23,

    // API
    API_FILE_OPEN_FAIL = -41,

    // Record
    NO_SUCH_TABLE = -61,
    NO_SUCH_ATTR = -62,
    ATTR_NUM_NOT_MATCH = -63,
    UNIQUE_CONFLICT = -64,
    
    // Index
    WRONG_TYPE=-81,				    //wrong type error
    BPT_ALREADY_EXSIST=-82,			//when insert into b+ tree
    NO_INDEX=-83,				    //when ask index
    NO_SUCH_ELEMENT=-84,			//when search failed
    INSERT_FAIL=-85,				//when insert failed
    DELETE_FAIL=-86,				//when delete failed
    ERROR_CMP_VALUE=-87,            //input error cmp value

    // Catalog
    TABLE_NAME_EXSITED = -101,                  // When creating a new table
    TABLE_NAME_NOEXSIT = -102,                  // When modifying/deleting a table or creating/deleting an index
    INDEX_NAME_EXSITED = -103,                  // When creating a new index
    INDEX_NAME_NOEXIST = -104,                  // When modifying/deleting an index
    ATTRI_NAME_NOEXSIT = -105,                  // When creating a new index
    ATTRI_NOT_UNIQUE = -106,                    // When creating a new index
    TABLE_CATALOG_FILE_READ_ERROR = -107,       // table.cat read error
    INDEX_CATALOG_FILE_READ_ERROR = -108,       // index.cat read error
    TABLE_CATALOG_FILE_WRITE_ERROR = -109,      // table.cat write error
    INDEX_CATALOG_FILE_WRITE_ERROR = -110,      // index.cat write error

    // Buffer

};

/* Types of attributes/elements */
enum NumType { CHAR, INT, FLOAT, DEFAULT };

/* Types of "where" conditions */
enum CMP {
	EQUAL,
	NOT_EQUAL,
	GREATER,
	GREATER_EQUAL,
	LESS,
	LESS_EQUAL,
    ERROR_CMP
};

/* Define the sizes of different elements */
static const size_t CHARSIZE = 1;               // 1 byte for a char
static const size_t INTSIZE = 4;                // 4 bytes for an integer
static const size_t FLOATSIZE = 4;              // 4 bytes for a float number
static const size_t DEFAULTSIZE = 0;

#endif
