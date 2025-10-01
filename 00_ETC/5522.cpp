#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, sum = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        sum += n;
    }
    cout << sum << endl;
    return 0;
}
//
// Created by 최승우 on 25. 10. 1.
//
