/*
 * MSql: ui/ui.hpp 
 * 
 * This file defines UI class
 * 
 */ 

#ifndef _UI_HPP_
#define _UI_HPP_

#include <string>
#include <vector>
#include "../catalog/catalogManager.hpp"

using namespace std;

class UI {
public:
    UI();
    ~UI();
    string fetchStatement() const;
    void plotTable(const vector<string>&, const vector<NumType>&, const vector<int>&, const vector<Tuple>&, const vector<string>&) const;
};

#endif