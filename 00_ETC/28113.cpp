#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    // a == 버스 도착
    // b == 열차 도착
    // n == 열차까지
    int n, a, b;
    cin >> n >> a >> b;

    int subway = 0;
    subway = max(n, b);

    if (a == subway) {
        cout << "Anything";
    } else if (subway > a) {
        cout << "Bus";
    } else if (subway < a) {
        cout << "Subway";
    }
    return 0;
}//
// Created by 최승우 on 26. 3. 11.
//
