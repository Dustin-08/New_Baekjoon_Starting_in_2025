#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;

    int n = (a + 1) * (b + 1) / (c + 1) - 1;
    cout << n << endl;
    return 0;
}
//
// Created by 최승우 on 25. 9. 30.
//
