#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; ++i) {
        vector<int> v(10);
        for (int j = 0; j < 10; ++j) {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        cout << v[7] << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 28.
//
