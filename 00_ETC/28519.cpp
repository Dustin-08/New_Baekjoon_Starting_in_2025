#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int absNM = abs(n - m);
    if (absNM <= 1) {
        cout << n + m << endl;
    } else {
        int ans = 2 * min(n, m) + 1;
        cout << ans << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 16.
//
