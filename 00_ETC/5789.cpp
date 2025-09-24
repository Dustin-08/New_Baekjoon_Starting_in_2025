#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        int middle = s.length() / 2;
        string sub = s.substr(middle - 1, 2);
        char first = sub.front();
        char last = sub.back();
        if (first == last) {
            cout << "Do-it" << endl;
        } else {
            cout << "Do-it-Not" << endl;
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 24.
//
