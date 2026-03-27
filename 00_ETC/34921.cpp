#include <iostream>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, t;
    cin >> a >> t;
    int p = 0;
    p = 10 + 2 * (25 - a + t);
    if (p >= 0) {
        cout << p << "\n";
    } else {
        cout << 0 << "\n";
    }
    return 0;
}//
// Created by 최승우 on 26. 3. 27.
//
