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
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    if (n == 1) {
        cout << "?" << endl;
        return 0;
    }

    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());

    if (v[0] == mn && v[0] == mx) {
        cout << "?" << endl;
    } else if (v[0] == mn) {
        cout << "ez" << endl;
    } else if (v[0] == mx) {
        cout << "hard" << endl;
    } else {
        cout << "?" << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 26.
//
