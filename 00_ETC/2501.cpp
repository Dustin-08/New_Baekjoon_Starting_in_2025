#include <iostream>
#include <vector>
using namespace std;

int n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            v.push_back(i);
        }
    }

    if (v.size() >= k) {
        cout << v[k - 1];
    } else {
        cout << 0;
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 1.
//
