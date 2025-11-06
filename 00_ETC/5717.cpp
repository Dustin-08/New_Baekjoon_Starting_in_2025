#include <iostream>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int m, f;
    while (cin >> m >> f) {
        if (m == 0 && f == 0) {
            break;
        } else {
            int total = 0;
            total = m + f;
            cout << total << "\n";
        }
    }

    return 0;
}
//
// Created by 최승우 on 25. 11. 6.
//
