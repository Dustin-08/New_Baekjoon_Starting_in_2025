#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    vector<vector<int> > v1(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v1[i][j];
        }
    }
    vector<vector<int> > v2(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v2[i][j];
        }
    }
    vector<vector<int> > v3(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            v3[i][j] = v1[i][j] + v2[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << v3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 15.
//
