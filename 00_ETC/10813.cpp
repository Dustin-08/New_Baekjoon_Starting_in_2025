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

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = i + 1;
    }
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        swap(v[a - 1], v[b - 1]);
    }
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
