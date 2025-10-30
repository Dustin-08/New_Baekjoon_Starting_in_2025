#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int jjakCnt = 0, holCnt = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] % 2 != 0) {
            ++holCnt;
        } else {
            ++jjakCnt;
        }
    }
    if (jjakCnt > holCnt) {
        cout << "Happy";
    } else {
        cout << "Sad";
    }
    return 0;
}
//
// Created by 최승우 on 25. 10. 30.
//
