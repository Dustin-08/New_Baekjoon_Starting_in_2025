#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    if (n * 100 >= m) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
//
// Created by 최승우 on 25. 11. 1.
//
