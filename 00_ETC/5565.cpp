#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int totalPrice;
    cin >> totalPrice;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        int price;
        cin >> price;
        sum += price;
    }
    cout << totalPrice - sum << "\n";

    return 0;
}
//
// Created by 최승우 on 25. 9. 9.
//
