#include "../config.hpp"
#include "./interpreter.hpp"
#include "./generated/antlr4_cpp_runtime/runtime/src/antlr4-runtime.h"
#include "./generated/MSqlLexer.h"
#include "./generated/MSqlParser.h"

using namespace std;
using namespace antlr4;

/**
 * @prototype: isSpace(const string& s);
 * @function: judge if a string is consist of spaces
 **/
bool Interpreter::isSpace(const string& s) {
    if ( s.find_first_not_of(" ") == -1 ) return true;
    else return false;
}

/**
 * @prototype: getElement(const string&);
 * @function: construct an Element object from a given string
 **/
Element Interpreter::getElement(string& s) {
    if ( s.find_first_of(".") != -1 ) {
        return Element((float)atof(s.c_str()));
    }
    else if ( s.find_first_of("'") != -1 ) {
        s = s.substr(1, s.size()-2);
        return Element(s);
    }
    else {
        return Element(atoi(s.c_str()));
    }
}

/**
 * @prototype: getElement(const string&);
 * @function: construct an Element object from a given string
 **/
CMP Interpreter::getLogic(const string& s) {
    if ( s == ">=" ) 
        return GREATER_EQUAL;
    else if ( s == "<=" )
        return LESS_EQUAL;
    else if ( s == "<>" )
        return NOT_EQUAL;
    else if ( s == ">" )
        return GREATER;
    else if ( s == "=" )
        return EQUAL;
    else if ( s == "<" )
        return LESS;
    else
        return ERROR_CMP;
}

/**
 * @prototype: Interpreter(API& _api);
 * @function: constructor
 */
Interpreter::Interpreter(API& _api): api(_api) {}

/**
 * @prototype: ~Interpreter();
 * @function: default destructor
 */
Interpreter::~Interpreter() = default;

/**
 * @prototype: interpret(const string& s);
 * @function: interpret the read command
 */
void Interpreter::interpret(const string& s) {
    /* instantiate the antlr4 input stream */
    ANTLRInputStream input(s);
    /* instantiate the lexer */
    MSqlLexer lexer(&input);
    /* instantiate the tokens */
    CommonTokenStream tokens(&lexer);
    /* get the vector of all the tokens */
    tokens.fill();
    vector<antlr4::Token *> tempList = tokens.getTokens();
    /* remove all the separator */
    vector<string> tokenList;
    for ( int i = 0; i < tokens.size(); i++ ) {
        string t = tempList[i]->getText();
        if ( isSpace(t) || t == "(" || t == "," || t == ")" || t == ";" || t == "<EOF>" ) continue;
        else tokenList.push_back(t);
    }
    /* signals */
    int i = 0;
    /***************************************************************/
    /*                interpret create statement                   */
    /***************************************************************/
    if ( tokenList[i] == "create" || tokenList[i] == "CREATE" ) {
        ++i; bool flag = true;
        /* create table statement */
        if ( tokenList[i] == "table" || tokenList[i] == "TABLE" ) {
            ++i;
            // define some variable for table creation
            string tableName, primaryKey;
            vector<Attribute> attributes;
            // get the table name
            tableName = tokenList[i];
            // get the attributes
            for ( i = i+1; i < tokenList.size() && tokenList[i] != "primary"; ++i ) {
                int length;
                NumType type;
                bool isUnique = false;
                string attributeName = tokenList[i];
                if ( i+1 == tokenList.size() ) {
                    cout << "Interpreter::interpret error, expecting attribute type {int, float, char}" << endl;
                    flag = false;
                    break;
                }
                string attributeType = tokenList[i+1];
                // int type
                if ( attributeType == "int" ) {
                    length = INTSIZE;
                    type = INT;
                }
                // float type
                else if ( attributeType == "float" ) {
                    length = FLOATSIZE;
                    type = FLOAT;
                }
                // char type attribute
                else if ( attributeType == "char" ) {
                    type = CHAR;
                    length = atoi(tokenList[i+2].c_str());
                    if ( length > 0 ) ++i;
                    // char length error
                    else {
                        cout << "Interpreter::interpret error, char length error" << endl;
                        flag = false;
                        break;
                    }
                }
                // error, no type information
                else {
                    cout << "Interpreter::interpret error, '" << attributeType << "' error, ";
                    cout << "expecting attribute type {int, float, char}" << endl;
                    flag = false;
                    break;
                }
                // check if there is 'unique' keyword
                if ( i+2 == tokenList.size() ) {
                    cout << "Interpreter::interpret error, expecting primary key" << endl;
                    flag = false;
                    break;
                }
                else if ( tokenList[i+2] == "unique" ) {
                    isUnique = true;
                    i += 2;
                }
                else {
                    ++i;
                }
                // add the attribute into the attribute list
                attributes.push_back(Attribute(attributeName, type, length, isUnique));
            }
            // if there is an error, return directly
            if ( !flag ) return;
            // get the primary key name
            else {
                if ( i == tokenList.size() ) cout << "Interpreter::interpret error, expecting primary key" << endl;
                else {
                    primaryKey = tokenList[i+2];
                    api.createTable(tableName, attributes, primaryKey);
                }
            }
        }
        /* create index statement */
        else if ( tokenList[i] == "index" || tokenList[i] == "INDEX" ) {
            ++i;
            // define some variable for index creation
            string indexName, tableName, attributeName;
            indexName = tokenList[i]; i++;
            if ( tokenList[i] != "on" ) {
                cout << "Interpreter::interpret error, expecting 'on'" << endl;
                return;
            }
            else {
                ++i; tableName = tokenList[i];
                ++i; attributeName = tokenList[i];
                api.createIndex(indexName, tableName, attributeName);
            }
        }
        /* create statement error */
        else {
            cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
            cout << "expecting {table, index}" << endl;
            return;
        }
    }
    /*************************************************************/
    /*                interpret drop statement                   */
    /*************************************************************/
    else if ( tokenList[i] == "drop" || tokenList[i] == "DROP" ) {
        ++i;
        /* drop table statement */
        if ( tokenList[i] == "table" ) {
            string tableName = tokenList[i+1];
            api.dropTable(tableName);
        }
        /* drop index statement */
        else if ( tokenList[i] == "index" ) {
            string indexName = tokenList[i+1];
            api.dropIndex(indexName);
        }
        /* drop statement error */
        else {
            cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
            cout << "expecting {table, index}" << endl;
            return;
        }
    }
    /***************************************************************/
    /*                interpret select statement                   */
    /***************************************************************/
    else if ( tokenList[i] == "select" || tokenList[i] == "SELECT" ) {
        ++i;
        if ( tokenList[i] != "*" ) {
            cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
            cout << "expecting '*'" << endl;
            return;
        }
        else {
            ++i;
            if ( tokenList[i] != "from" ) {
                cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
                cout << "expecting 'from'" << endl;
                return;
            }
            else {
                ++i; string tableName = tokenList[i];
                // get the potential conditions for delete
                ++i; vector<SelectCondition> conditions;
                if ( i < tokenList.size() ) {
                    if ( tokenList[i] != "where" ) {
                        cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
                        cout << "expecting 'where'" << endl;
                        return;
                    }
                    else {
                        for ( ; i < tokenList.size(); i++ ) {
                            // get attribute name
                            ++i; string attributeName = tokenList[i];
                            // get logic operator name
                            ++i; CMP logicType = getLogic(tokenList[i]);
                            if ( logicType == ERROR_CMP ) {
                                cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
                                cout << "expecting {=, <>, <, <=, >, >=}" << endl;
                                return;
                            }
                            // get the specified variable value
                            ++i; Element element = getElement(tokenList[i]);
                            conditions.push_back(SelectCondition(attributeName, logicType, element));
                            // judge if there are more conditions
                            if ( i+1 < tokenList.size() ) {
                                if ( tokenList[i+1] != "and" ) {
                                    cout << "Interpreter::interpret error, '" << tokenList[i+1] << "' error, ";
                                    cout << "expecting 'and'" << endl;
                                    return;
                                }
                                else continue;
                            }
                        } // end of for
                    } // end of else
                }
                api.selectTuple(tableName, conditions);
            }
        }
    }
    /***************************************************************/
    /*                interpret insert statement                   */
    /***************************************************************/
    else if ( tokenList[i] == "insert" || tokenList[i] == "INSERT" ) {
        ++i;
        if ( tokenList[i] != "into" ) {
            cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
            cout << "expecting 'into'" << endl;
            return;
        }
        else {
            ++i; string tableName = tokenList[i]; ++i;
            if ( tokenList[i] != "values" ) {
                cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
                cout << "expecting 'values'" << endl;
                return;
            }
            else {
                ++i; vector<Element> elements;
                for ( ; i < tokenList.size(); i++ ) {
                    Element tmpElement = getElement(tokenList[i]);
                    elements.push_back(tmpElement);
                }
                Tuple tuple = Tuple(elements);
                api.insertTuple(tableName, tuple);
            }
        }
    }
    /***************************************************************/
    /*                interpret delete statement                   */
    /***************************************************************/
    else if ( tokenList[i] == "delete" || tokenList[i] == "DELETE" ) {
        ++i;
        if ( tokenList[i] != "from" ) {
            cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
            cout << "expecting 'from'" << endl;
            return;
        }
        else {
            // get the table name
            ++i; string tableName = tokenList[i];
            // get the potential conditions for delete
            ++i; vector<SelectCondition> conditions;
            if ( i < tokenList.size() ) {
                if ( tokenList[i] != "where" ) {
                    cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
                    cout << "expecting 'where'" << endl;
                    return;
                }
                else {
                    for ( ; i < tokenList.size(); i++ ) {
                        // get attribute name
                        ++i; string attributeName = tokenList[i];
                        // get logic operator name
                        ++i; CMP logicType = getLogic(tokenList[i]);
                        if ( logicType == ERROR_CMP ) {
                            cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
                            cout << "expecting {=, <>, <, <=, >, >=}" << endl;
                            return;
                        }
                        // get the specified variable value
                        ++i; Element element = getElement(tokenList[i]);
                        conditions.push_back(SelectCondition(attributeName, logicType, element));
                        // judge if there are more conditions
                        if ( i+1 < tokenList.size() ) {
                            if ( tokenList[i+1] != "and" ) {
                                cout << "Interpreter::interpret error, '" << tokenList[i+1] << "' error, ";
                                cout << "expecting 'and'" << endl;
                                return;
                            }
                            else continue;
                        }
                    } // end of for
                } // end of else
            }
            api.deleteTuple(tableName, conditions);
        }
    }
    /***************************************************************/
    /*                      wrong statement                        */
    /***************************************************************/
    else {
        cout << "Interpreter::interpret error, '" << tokenList[i] << "' error, ";
        cout << "expecting {create, drop, select, insert, delete}" << endl;
    }
}