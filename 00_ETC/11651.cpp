#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<vector<int> > v(n, vector<int>(2, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> v[i][j];
        }
    }
    sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) {
        if (a[1] == b[1]) {
            return a[0] < b[0];
        }else {
            return a[1] < b[1];
        }
    });
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 22.
//
