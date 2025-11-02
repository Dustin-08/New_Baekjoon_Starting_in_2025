#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    if (n < 13) {
        cout << n;
    } else if (n >= 13) {
        cout << n + 1;
    }
    return 0;
}
//
// Created by 최승우 on 25. 11. 3.
//
