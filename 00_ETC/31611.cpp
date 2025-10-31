#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int x;
    cin >> x;
    int xRe = x - 2;
    if (xRe == 0) {
        cout << "1";
    } else if (xRe % 7 == 0) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}
//
// Created by 최승우 on 25. 10. 31.
//
