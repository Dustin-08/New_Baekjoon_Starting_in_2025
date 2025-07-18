#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string str;
vector<char> camb = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    vector<char> v(str.begin(), str.end());

    for (auto it = v.begin(); it != v.end();) {
        if (find(camb.begin(), camb.end(), *it) != camb.end()) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
    for (char c: v) {
        cout << c;
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
