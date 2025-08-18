#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int product = a * b * c;
    int cnt[10] = {0};
    while (product > 0) {
        ++cnt[product % 10];
        product /= 10;
    }
    for (int i = 0; i < 10; ++i) {
        cout << cnt[i] << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 18.
//
