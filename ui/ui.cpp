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

void UI::plotTable(const vector<Tuple>& tuples, const vector<string>& titles, const vector<int>& attrIndexs) const {
	// push the title into the printList
	int size;
	vector<vector<string>> printList;
	if ( attrIndexs[0] == -1 ) {
		printList.push_back(titles);
		size = titles.size();
	}
	else {
		size = attrIndexs.size();
		vector<string> tempTitles;
		for ( int i = 0; i < size; i++ ) {
			tempTitles.push_back(titles[attrIndexs[i]]);
		}
		printList.push_back(tempTitles);
	}
	// push all the data into the printList
	for ( auto t : tuples ) {
		vector<string> tempTuple;
		if ( attrIndexs[0] == -1 ) {
			for ( int i = 0; i < size; i++ ) {
				tempTuple.push_back(t.getData()[i].elementToString());
			}
		}
		else {
			for ( int i = 0; i < size; i++ ) {
				tempTuple.push_back(t.getData()[attrIndexs[i]].elementToString());
			}
		}
		printList.push_back(tempTuple);
	}
	// find the max row length of each column
	vector<int> maxLens(size, 0);
	for ( auto i : printList ) {
		for ( auto j = i.begin(); j != i.end(); ++j ) {
			maxLens[j-i.begin()] = max(maxLens[j-i.begin()], int(j->length()));
		}
	}
	vector<vector<string>> new_print;
	for ( auto i : printList ) {
		vector<string> new_tuple;
		for ( auto j = i.begin(); j != i.end(); j++ ) {
			*j = "|" + *j + string(maxLens[j - i.begin()] - j->length() + 1, ' ');
			new_tuple.push_back(*j);
		}
		new_print.push_back(new_tuple);
	}
	for ( auto i : new_print ) {
		for (int j = 0; j < maxLens.size(); j++) {
			cout << "+" << string(maxLens[j]+1, '-');
		}
		cout << "+" << endl;;
		for (auto j : i) {
			cout << j;
		}
		cout << "|" << endl;;
	}
	for ( int j = 0; j < maxLens.size(); j++ ) {
		cout << "+" << string(maxLens[j]+1, '-');
	}
	cout << "+" << endl;
	// print the prompt of how many tuples selected
	switch (tuples.size()) {
		case 0:
			cout << "0 record selected" << endl;
			return;
		case 1:
			cout << "1 record selected" << endl;
			break;
		default:
			cout << tuples.size() << " records selected" << endl;
			break;
	}
}
