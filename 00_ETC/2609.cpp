// 유클리드 호제법
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r = a % b; // r은 나머지
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int a, b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    int GCD = gcd(a, b); // 최대공약수
    int LCM = a * b / GCD; // 최소공배수

    cout << GCD << "\n";
    cout << LCM << "\n";
    return 0;
}
//
// Created by 최승우 on 25. 7. 3.
//
