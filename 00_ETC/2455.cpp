#include <iostream>
using namespace::std;

// a == 하차 수, b == 탑승 수
// c == 현재 기차내 탑승객 수, d == 최대값 수
int a, b, c, d;

int main() {
    for (int i = 0; i < 4; ++i) {
        cin >> a >> b;
        // 현재 탑승객 수 - 하차 수 + 탑승 수
        c = c - a + b;
        d = max(c, d);
    }
    // 최종 높은 탑승객 수 출력
    cout << d;
    return 0;
}

//
// Created by 최승우 on 25. 6. 15.
//
