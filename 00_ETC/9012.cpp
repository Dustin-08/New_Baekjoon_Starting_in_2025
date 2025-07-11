#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    cin.ignore();

    int leftCnt = 0, rightCnt = 0;

    for (int i = 0; i < t; ++i) {
        string str;
        getline(cin, str);

        int cnt = 0;
        bool isValid = true;

        for (char ch: str) {
            if (ch == '(') {
                ++cnt;
            } else if (ch == ')') {
                --cnt;
            }
            if (cnt < 0) {
                isValid = false;
                break;
            }
        }
        if (cnt != 0) {
            isValid = false;
        }
        cout << (isValid ? "YES" : "NO") << "\n";
    }
    return 0;
}

//
// Created by 최승우 on 25. 7. 11.
//
