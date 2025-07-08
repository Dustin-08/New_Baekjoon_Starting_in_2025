// 비트마스킹 문제 <- 비트 연산 필요

#include <iostream>
#include <string>

using namespace std;

int m, x;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s = 0; // 공집합
    cin >> m;

    for (int i = 0; i < m; ++i) {
        cin >> str;
        if (str == "add") {
            cin >> x;
            s |= (1 << x); // s집합에 원소를 추가
        } else if (str == "check") {
            cin >> x;
            if (s & (1 << x)) {
                // s에 x가 있으면
                cout << "1" << "\n";
            } else {
                // s에 x가 없으면
                cout << "0" << "\n";
            }
        } else if (str == "remove") {
            cin >> x;
            s &= ~(1 << x); // s집합에 원소를 삭제
        } else if (str == "toggle") {
            cin >> x;
            s ^= (1 << x); // xor, 0 -> 1, 1 -> 0
        } else if (str == "all") {
            s = (1 << 21) - 1; // s에 모든 원소 채우기(1~20)
        } else if (str == "empty") {
            s = 0; // 공집합 화 시키기 == (s = 0)
        }
    }
    return 0;
}

//
// Created by 최승우 on 25. 7. 9.
//
