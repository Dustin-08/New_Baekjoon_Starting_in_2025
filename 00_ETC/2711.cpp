#include <iostream>
using namespace std;

int t, n;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> str;
        int newN = n - 1;
        str.erase(str.begin() + newN);
        cout << str << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 24.
//
