#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    vector<int> a(m);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    int maxH = *max_element(h.begin(), h.end());
    int maxA = *max_element(a.begin(), a.end());
    cout << maxH + maxA << "\n";

    return 0;
}
//
// Created by 최승우 on 25. 9. 8.
//
