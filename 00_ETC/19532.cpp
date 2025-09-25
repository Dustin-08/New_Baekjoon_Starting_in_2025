#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    // aX + bY = c, dX+eY = f
    // X + 3Y = -1, 4X + Y = 7
    // X = -1 - 3Y, 4(-1 -3Y) + Y = 7
    // -4 -12Y + Y = 7
    // -11Y = 11
    // Y = -1, X = 2
    for (int i = -999; i <= 999; ++i) {
        for (int j = -999; j <= 999; ++j) {
            if (a * i + b * j == c && d * i + e * j == f) {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}

//
// Created by 최승우 on 25. 9. 25.
//
