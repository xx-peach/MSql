/*
 * MSql: interpreter/interpreter.hpp 
 * 
 * This file declares Interpreter class
 * 
 */ 

#ifndef _INTERPRETER_H_
#define _INTERPRETER_H_

#include "../api/api.hpp"
#include "../merror.hpp"

class Interpreter {
private:
    API& api;
    bool isSpace(const string&);
    CMP getLogic(const string&, const string&);
    Element getElement(string&);
    string removeQuotes(string&);
    NumType getType(const string&);
public:
    Interpreter(API&);
    ~Interpreter();
    void interpret(const string&);
};

#endif
