#include "../config.hpp"
#include "./interpreter.hpp"
#include "./generated/antlr4_cpp_runtime/runtime/src/antlr4-runtime.h"
#include "./generated/MSqlLexer.h"
#include "./generated/MSqlParser.h"

using namespace std;
using namespace antlr4;

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
    else if ( s.find_first_of("\"") != -1 ) {
        s = s.substr(1, s.size()-2);
        return Element(s);
    }
    else {
        return Element(atoi(s.c_str()));
    }
}


/**
 * @prototype: string removeQuotes(string&);
 * @function: remove quotes from a string
 **/
string Interpreter::removeQuotes(string& s) {
    if ( s.find_first_of("'") != -1 ) {
        return s.substr(1, s.size()-2);
    }
    else if ( s.find_first_of("\"") != -1 ) {
        return s.substr(1, s.size()-2);
    }
    else {
        return s;
    }
}

/**
 * @prototype: getElement(const string&);
 * @function: construct an Element object from a given string
 **/
NumType Interpreter::getType(const string& s) {
    if ( s.find_first_of(".") != -1 ) {
        return FLOAT;
    }
    else if ( s.find_first_of("'") != -1 ) {
        return CHAR;
    }
    else if ( s.find_first_of("\"") != -1) {
        return CHAR;
    }
    else {
        return INT;
    }
}

/**
 * @prototype: getElement(const string&);
 * @function: construct an Element object from a given string
 **/
CMP Interpreter::getLogic(const string& s1, const string& s2) {
    if ( s1 == ">" && s2 == "=" ) 
        return GREATER_EQUAL;
    else if ( s1 == "<" && s2 == "=" )
        return LESS_EQUAL;
    else if ( s1 == "<" && s2 == ">" )
        return NOT_EQUAL;
    else if ( s1 == ">" && s2 != "=" && s2 != ">" && s2 != "<" )
        return GREATER;
    else if ( s1 == "<" && s2 != "=" && s2 != ">" && s2 != "<" )
        return LESS;
    else if ( s1 == "=" && s2 != "=" && s2 != ">" && s2 != "<" )
        return EQUAL;
    else
        return ERROR_CMP;
}

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
        // else if ( !t.size() || t == "" || t == "\0" ) continue;
        else tokenList.push_back(t);
    }
    /* the count variable used as position */
    int i = 0;
    /***************************************************************/
    /*                interpret create statement                   */
    /***************************************************************/
    if ( tokenList[i] == "create" || tokenList[i] == "CREATE" ) {
        ++i;
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
                if ( i+1 == tokenList.size() ) throw MError(ATTRIBUTE_ERROR);
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
                    else throw MError(CHAR_LENGTH_ERROR);
                }
                // error, no type information
                else throw MError(ATTRIBUTE_ERROR);
                // check if there is 'unique' keyword
                if ( i+2 == tokenList.size() ) throw MError(PRIMARY_KEY_NOT_EXIST);
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
            // get the primary key name
            if ( i == tokenList.size() ) throw MError(PRIMARY_KEY_NOT_EXIST);
            else {
                primaryKey = tokenList[i+2];
                api.createTable(tableName, attributes, primaryKey);
            }
        }
        /* create index statement */
        else if ( tokenList[i] == "index" || tokenList[i] == "INDEX" ) {
            ++i;
            // define some variable for index creation
            string indexName, tableName, attributeName;
            indexName = tokenList[i]; i++;
            if ( tokenList[i] != "on" ) throw MError(ON_NOT_EXIST);
            else {
                ++i; tableName = tokenList[i];
                ++i; attributeName = tokenList[i];
                api.createIndex(indexName, tableName, attributeName);
            }
        }
        /* create statement error */
        else throw MError(EXPECTING_TABLE_OR_INDEX);
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
        else throw MError(EXPECTING_TABLE_OR_INDEX);
    }
    /***************************************************************/
    /*                interpret select statement                   */
    /***************************************************************/
    else if ( tokenList[i] == "select" || tokenList[i] == "SELECT" ) {
        ++i; vector<string> selectAttrs;
        while ( tokenList[i] != "from" && i != tokenList.size() ) {
            selectAttrs.push_back(tokenList[i]);
            ++i;
        }
        if ( i == tokenList.size() ) throw MError(FROM_NOT_EXIST);
        else {
            if ( tokenList[i] != "from" ) throw MError(FROM_NOT_EXIST);
            else {
                ++i; string tableName = tokenList[i];
                // get the potential conditions for delete
                ++i; vector<SelectCondition> conditions;
                if ( i < tokenList.size() ) {
                    if ( tokenList[i] != "where" ) throw MError(WHERE_NOT_EXIST);
                    else {
                        for ( ; i < tokenList.size(); i++ ) {
                            // get attribute name
                            ++i; string attributeName = tokenList[i];
                            // get logic operator name
                            ++i; CMP logicType = getLogic(tokenList[i], tokenList[i+1]);
                            if ( logicType == GREATER_EQUAL || logicType == NOT_EQUAL || logicType == LESS_EQUAL ) ++i;
                            if ( logicType == ERROR_CMP ) throw MError(LOGICTYPE_ERROR);
                            // get the specified variable value
                            ++i; Element element = getElement(tokenList[i]);
                            conditions.push_back(SelectCondition(attributeName, logicType, element));
                            // judge if there are more conditions
                            if ( i+1 < tokenList.size() ) {
                                if ( tokenList[i+1] != "and" ) throw MError(AND_NOT_EXIST);
                                else continue;
                            }
                        }
                    }
                }
                api.selectTuple(tableName, conditions, selectAttrs);
            }
        }
    }
    /***************************************************************/
    /*                interpret insert statement                   */
    /***************************************************************/
    else if ( tokenList[i] == "insert" || tokenList[i] == "INSERT" ) {
        ++i;
        if ( tokenList[i] != "into" ) throw MError(INTO_NOT_EXIST);
        else {
            ++i; string tableName = tokenList[i]; ++i;
            if ( tokenList[i] != "values" ) throw MError(VALUES_NOT_EXIST);
            else {
                ++i; vector<pair<NumType, string>> tupleString;
                for ( ; i < tokenList.size(); i++ ) {
                    tupleString.push_back(make_pair(getType(tokenList[i]), removeQuotes(tokenList[i])));
                }
                api.insertTuple(tableName, tupleString);
            }
        }
    }
    /***************************************************************/
    /*                interpret delete statement                   */
    /***************************************************************/
    else if ( tokenList[i] == "delete" || tokenList[i] == "DELETE" ) {
        ++i;
        if ( tokenList[i] != "from" ) throw MError(FROM_NOT_EXIST);
        else {
            // get the table name
            ++i; string tableName = tokenList[i];
            // get the potential conditions for delete
            ++i; vector<SelectCondition> conditions;
            if ( i < tokenList.size() ) {
                if ( tokenList[i] != "where" ) throw MError(WHERE_NOT_EXIST);
                else {
                    for ( ; i < tokenList.size(); i++ ) {
                        // get attribute name
                        ++i; string attributeName = tokenList[i];
                        // get logic operator name
                        ++i; CMP logicType = getLogic(tokenList[i], tokenList[i+1]);
                        if ( logicType == GREATER_EQUAL || logicType == NOT_EQUAL || logicType == LESS_EQUAL ) ++i;
                        if ( logicType == ERROR_CMP ) throw MError(LOGICTYPE_ERROR);
                        // get the specified variable value
                        ++i; Element element = getElement(tokenList[i]);
                        conditions.push_back(SelectCondition(attributeName, logicType, element));
                        // judge if there are more conditions
                        if ( i+1 < tokenList.size() ) {
                            if ( tokenList[i+1] != "and" ) throw MError(AND_NOT_EXIST);
                            else continue;
                        }
                    }
                }
            }
            api.deleteTuple(tableName, conditions);
        }
    }
    /***************************************************************/
    /*                      wrong statement                        */
    /***************************************************************/
    else throw MError(STATEMENT_ERROR);
}