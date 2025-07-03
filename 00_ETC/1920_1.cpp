#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());

    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
        cout << binary_search(v1.begin(), v1.end(), v2[i]) << "\n";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 3.
//
