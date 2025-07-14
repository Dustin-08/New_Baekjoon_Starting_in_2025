#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    int cnt = 1;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ',') {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
//
// Created by 최승우 on 25. 7. 14.
//
