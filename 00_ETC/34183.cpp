#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    // n=팀 갯수, m=현재 보유중인 의자의 갯수, a=의자 가격, b=운송비
    // 팀당 3개의 의자 필요
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (n * 3 > m) {
        int sum = n * 3 - m;
        sum = sum * a + b;
        cout << sum;
    } else {
        cout << 0;
    }


    return 0;
}
//
// Created by 최승우 on 25. 9. 2.
//
