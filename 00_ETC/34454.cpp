#include <iostream>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, c, p;
    cin >> n;
    cin >> c;
    cin >> p;

    int total = c * p;
    if (n > total) {
        cout << "no";
    } else {
        cout << "yes";
    }
    return 0;
}
//
// Created by 최승우 on 25. 11. 7.
//
