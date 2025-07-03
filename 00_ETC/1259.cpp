#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string str;
string str2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (true) {
        cin >> str;
        if (str == "0") {
            break;
        }
        str2 = str;
        reverse(str2.begin(), str2.end());
        if (str == str2) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 3.
//
