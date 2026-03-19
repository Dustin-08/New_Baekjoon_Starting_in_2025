#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int x;
    cin >> x;

    // 등차수열: 연속된 두 개의 수의 차이가 일정한 수열
    // 한수: x의 자리수가 등차수열을 이루는 것
    // ex) 247 -> 2 4 7이 각 3개의 차를 가진 등차수열임

    int cnt = 0;
    for (int i = 1; i <= x; ++i) {
        int temp = i;
        // 1 ~ 99: 모두 한수 (1~9는 1자리, 10~99는 2자리로 공차 정의 가능)
        if (i < 100) {
            ++cnt;
        } else {
            // 100 ~ 999: 3자리 수인 경우, 백의 자리, 십의 자리, 일의 자리가 등차수열인지 확인
            int a = i / 100;
            int b = (i % 100) / 10;
            int c = i % 10;

            if (2 * b == a + c) {
                ++cnt;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}//
// Created by 최승우 on 26. 3. 19.
//
