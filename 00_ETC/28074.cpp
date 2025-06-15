#include <iostream>
#include <algorithm>
using namespace::std;

string str;
string m = "M";
string o = "O";
string b = "B";
string i = "I";
string s = "S";

int main() {
    cin >> str;
    if (str.find(m) == string::npos || str.find(o) == string::npos || str.find(b) == string::npos || str.find(i) ==
        string::npos || str.find(s) == string::npos) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}

//
// Created by 최승우 on 25. 6. 15.
//
