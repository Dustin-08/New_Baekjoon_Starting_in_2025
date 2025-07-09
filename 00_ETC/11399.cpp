// 그리디 알고리즘

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, p;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    int acc = 0;
    for (int i = 0; i < n; ++i) {
        acc += v[i];
        sum += acc;
    }
    cout << sum << "\n";

    return 0;
}
//
// Created by 최승우 on 25. 7. 10.
//
