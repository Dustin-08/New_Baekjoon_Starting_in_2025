#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v(7);
    for (int i = 0; i < 7; ++i) {
        cin >> v[i];
    }
    int sum = 0, holCnt = 0, minValue = 100;
    for (int i = 0; i < 7; ++i) {
        if (v[i] % 2 == 1) {
            sum += v[i];
            ++holCnt;
            if (v[i] < minValue) {
                minValue = v[i];
            }
        }
    }
    if (holCnt == 0) {
        cout << "-1" << endl;
    } else {
        cout << sum << endl;
        cout << minValue << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 5.
//
