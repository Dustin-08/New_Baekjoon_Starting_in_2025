#include <iostream>
#include <cmath>
using namespace std;

// 근의 공식: x^2 + 2Ax + B = 0
// 짝수 근의 공식: x = -A +- route(A^2 - B)
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    // // +- 이므로 이걸 각각으로 나눔
    // int plus = -a + sqrt(a * a - b);
    // int minus = -a - sqrt(a * a - b);
    //
    // // 같을 시에는
    // if (plus == minus) {
    //     cout << plus << endl;
    // } else {
    //     cout << minus << " " << plus << endl;
    // }

    // 인데 이제 짝수 근의 공식을 모른 상태에서 완탐으로 풀이
    for (int i = -1000; i <= 1000; ++i) {
        // 근의 공식: x^2 + 2Ax + B = 0
        if ((i * i) + (2 * a * i) + b == 0) {
            cout << i << ' ';
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 17.
//
