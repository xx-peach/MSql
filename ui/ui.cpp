#include "./ui.hpp"
#include "../config.hpp"
#include <iostream>
using namespace std;

UI::UI() = default;

UI::~UI() = default;

string UI::fetchStatement() const {
	bool flag = true;
	string statement, templine;
	while (1) {
		/* print the input prompt */
		if ( flag ) cout << prompt_str_1;
		else cout << prompt_str_2;
		/* get the current line of input statement */
		getline(cin, templine);                 // get a whole line of input instruction
		statement += templine;                  // add the new line of instruction fetched to the final statement
        /* All statements must end with a ';' */
		if ( templine.back() == ';' ) {
			flag = true;
			break;
		}
        /* If the end char of the line is not a ';', then simply add it and continue */
        else {
			statement += " ";
			flag = false;
		}
	}
	return statement;
}

void UI::plotTable(const vector<string>& src_name_list, const vector<NumType>& src_type_list, const vector<int>& src_length_list, const vector<Tuple>& src_tuple_list, const vector<string>& src_attr_names) const{
	switch (src_tuple_list.size()) {
		case 0:
			cout << "Empty set" << endl;
			break;
		default:
			cout << src_tuple_list.size() << " records selected" << endl;
			break;
	}
	vector<string> titles;
	vector<string> new_titles;
	for ( int i = 0; i < src_name_list.size(); i++ ) {
		string temp = src_name_list[i];
		switch (src_type_list[i]) {
			case NumType::INT:
				temp += "(int)";
				break;
			case NumType::FLOAT:
				temp += "(float)";
				break;
			case NumType::CHAR:
				temp += "(char(" + to_string(src_length_list[i]) + "))";
				break;
			default:
				break;
		}
		new_titles.push_back(temp);
	}
	vector<vector<string>> to_print_table;
	to_print_table.push_back(new_titles);
	for (auto i : src_tuple_list) {
		vector<string> temp;
		auto item_list = i.valueList(src_attr_names);
		for (auto j : item_list) {
			temp.push_back(j.toString());
		}
		to_print_table.push_back(temp);
	}
	vector<int> max_lengths(src_attr_names.size(), 0);
	for (auto i : to_print_table) {
		for (auto j = i.begin(); j != i.end(); j++) {
			max_lengths[j - i.begin()] = max(max_lengths[j - i.begin()], int(j->length()));
		}
	}
	vector<vector<string>> new_print;
	for (auto i : to_print_table) {
		vector<string> new_tuple;
		for (auto j = i.begin(); j != i.end(); j++) {
			*j = "|" + *j + string(max_lengths[j - i.begin()] - j->length() + 1, ' ');
			new_tuple.push_back(*j);
		}
		new_print.push_back(new_tuple);
	}
	for (auto i : new_print) {
		for (int j = 0; j < max_lengths.size(); j++) {
			cout << "+" << string(max_lengths[j]+1, '-');
		}
		cout << "+" << endl;;
		for (auto j : i) {
			cout << j;
		}
		cout << "|" << endl;;
	}
	for (int j = 0; j < max_lengths.size(); j++) {
		cout << "+" << string(max_lengths[j]+1, '-');
	}
	cout << "+" << endl;;
}