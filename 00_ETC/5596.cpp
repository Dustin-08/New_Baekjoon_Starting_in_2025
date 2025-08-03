#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s, t;
    int sSum = 0, tSum = 0;
    for (int i = 0; i < 4; ++i) {
        cin >> s;
        sSum = sSum + s;
    }
    for (int i = 0; i < 4; ++i) {
        cin >> t;
        tSum = tSum + t;
    }
    if (sSum == tSum) {
        cout << sSum << endl;
    } else if (sSum > tSum) {
        cout << sSum << endl;
    } else if (sSum < tSum) {
        cout << tSum << endl;
    }

    return 0;
}
//
// Created by 최승우 on 25. 8. 3.
//
