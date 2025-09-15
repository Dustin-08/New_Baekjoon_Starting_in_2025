#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    int cuteCnt = 0, cuteNotCnt = 0;
    for (int i = 0; i < n; ++i) {
        int cute;
        cin >> cute;
        if (cute == 1) {
            ++cuteCnt;
        } else if (cute == 0) {
            ++cuteNotCnt;
        }
    }
    if (cuteCnt > cuteNotCnt) {
        cout << "Junhee is cute!";
    } else if (cuteCnt < cuteNotCnt) {
        cout << "Junhee is not cute!";
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 15.
//
