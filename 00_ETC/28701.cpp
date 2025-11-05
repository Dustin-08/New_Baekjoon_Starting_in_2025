#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    int total = 0;
    for (int i = 1; i <= n; ++i) {
        total += i;
    }
    cout << total << "\n";
    int powResult = pow(total, 2);
    cout << powResult << "\n";

    int total2 = 0;
    for (int i = 1; i <= n; ++i) {
        int threeResult = pow(i, 3);
        total2 += threeResult;
    }
    cout << total2 << "\n";
    return 0;
}
//
// Created by 최승우 on 25. 11. 4.
//
