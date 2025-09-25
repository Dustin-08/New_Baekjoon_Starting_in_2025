#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    int a, b;
    //pow(a, 2) - n = pow(b, 2)
    int ansCnt = 0;
    for (int i = 1; i <= 500; ++i) {
        for (int j = 1; j <= 500; ++j) {
            // 제곱 조건 + b가 a보다 작다 조건 만족 필요
            if (i * i - j * j == n && j <= i) {
                ++ansCnt;
            }
        }
    }
    cout << ansCnt << endl;
    return 0;
}
//
// Created by 최승우 on 25. 9. 25.
//
