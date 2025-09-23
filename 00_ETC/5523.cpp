#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    int aWinCnt = 0, bWinCnt = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            ++aWinCnt;
        } else if (a < b) {
            ++bWinCnt;
        }
    }
    cout << aWinCnt << " " << bWinCnt;
    return 0;
}
//
// Created by 최승우 on 25. 9. 22.
//
