#include <iostream>
#include <algorithm>
using namespace std;

string x, y;

string rev(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> x >> y;
    int rx = stoi(rev(x));
    int ry = stoi(rev(y));
    int sum = rx + ry;
    string s = to_string(sum);
    cout << stoi(rev(s)) << endl;

    return 0;
}
//
// Created by 최승우 on 25. 7. 17.
//
