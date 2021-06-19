#ifndef _ERROR_H_
#define _ERROR_H_

#include "./config.hpp"
#include <iostream>

class MError {
private:
    Result m_badValue;
public:
    MError(Result i): m_badValue(i) {}
    ~MError() {}
    void diagnostic() {
        if ( m_badValue == CHAR_LENGTH_ERROR ) {
            cout << "Interpreter::interpret error, char length error" << endl;
        }
        else if ( m_badValue == ATTRIBUTE_ERROR ) {
            cout << "Interpreter::interpret error, expecting attribute type {int, float, char}" << endl;
        }
        else if ( m_badValue == PRIMARY_KEY_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting primary key" << endl;
        }
        else if ( m_badValue == ON_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting 'on'" << endl;
        }
        else if ( m_badValue == EXPECTING_TABLE_OR_INDEX ) {
            cout << "Interpreter::interpret error, expecting {table, index}" << endl;
        }
        else if ( m_badValue == STAR_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting '*'" << endl;
        }
        else if ( m_badValue == FROM_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting 'from'" << endl;
        }
        else if ( m_badValue == WHERE_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting 'where'" << endl;
        }
        else if ( m_badValue == LOGICTYPE_ERROR ) {
            cout << "Interpreter::interpret error, expecting {=, <>, <, <=, >, >=}" << endl;
        }
        else if ( m_badValue == AND_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting 'and'" << endl;
        }
        else if ( m_badValue == INTO_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting 'into'" << endl;
        }
        else if ( m_badValue == VALUES_NOT_EXIST ) {
            cout << "Interpreter::interpret error, expecting 'values'" << endl;
        }
        else if ( m_badValue == STATEMENT_ERROR ) {
            cout << "Interpreter::interpret error, expecting {create, drop, select, insert, delete}" << endl;
        }
        else if ( m_badValue == TABLE_NAME_NOEXSIT ) {
            cout << "CatalogManager::dropTable error, table not exists" << endl;
        }
        else if ( m_badValue == TABLE_CATALOG_FILE_READ_ERROR ) {
            cout << "CatalogManager::initialTable error, open file fail" << endl;
        }
        else if ( m_badValue == INDEX_CATALOG_FILE_WRITE_ERROR ) {
            cout << "CatalogManager::storeIndex error, open file fail" << endl;
        }
        else if ( m_badValue == TABLE_CATALOG_FILE_WRITE_ERROR ) {
            cout << "CatalogManager::createTable error, open file fail" << endl;
        }
        else if ( m_badValue == TABLE_NAME_EXSITED ) {
            cout << "CatalogManager::createTable error, table already exists" << endl;
        }
    }
};

#endif