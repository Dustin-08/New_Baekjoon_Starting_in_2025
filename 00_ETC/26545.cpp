#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, sum = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        sum += m;
    }
    cout << sum << endl;
    return 0;
}
//
// Created by 최승우 on 25. 10. 24.
//
