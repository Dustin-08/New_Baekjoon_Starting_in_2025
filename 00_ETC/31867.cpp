#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;
string s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    int holCnt = 0;
    int jjackCnt = 0;
    for (int i = 0; i < n; ++i) {
        v.push_back(s[i] - '0');
        if (v[i] % 2 == 0) {
            ++jjackCnt;
        } else if (v[i] % 2 != 0) {
            ++holCnt;
        }
    }
    if (jjackCnt > holCnt) {
        cout << "0" << "\n";
    } else if (jjackCnt < holCnt) {
        cout << "1" << "\n";
    } else {
        cout << "-1" << "\n";
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 3.
//
