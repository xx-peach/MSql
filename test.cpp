#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string s; cin >> s;
    ifstream inFile(s);
    if ( inFile.is_open() ) {
        cout << "here" << endl;
    }
    return 0;
}