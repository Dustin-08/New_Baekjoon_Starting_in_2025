#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int candy = a * b;
    int plasticbag = c * 1;
    int total = candy + plasticbag;

    cout << total << endl;
    return 0;
}
//
// Created by 최승우 on 25. 10. 26.
//
