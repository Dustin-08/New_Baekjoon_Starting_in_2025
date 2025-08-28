#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    locale loc;
    string str;
    cin >> str;

    for (char &ch: str) {
        ch = toupper(ch, loc);
    }
    cout << str;
    return 0;
}//
// Created by 최승우 on 25. 8. 28.
//
