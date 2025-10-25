#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    int tensDigit = n / 10;
    int onesDigit = n % 10;

    if (tensDigit == onesDigit) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
//
// Created by 최승우 on 25. 10. 25.
//
