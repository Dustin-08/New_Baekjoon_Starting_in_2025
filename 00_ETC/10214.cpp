#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int sumY, sumK;
        for (int j = 0; j < 9; ++j) {
            int y, k;
            cin >> y >> k;
            sumY += y;
            sumK += k;
        }
        if (sumY > sumK) {
            cout << "Yonsei" << endl;
        } else if (sumY < sumK) {
            cout << "Korea" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 19.
//
