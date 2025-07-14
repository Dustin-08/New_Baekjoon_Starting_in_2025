#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        getline(cin, str);
        if (cin.eof() == true) {
            break;
        } else {
            cout << str << endl;
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 14.
//
