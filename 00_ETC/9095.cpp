#include <iostream>
#include <vector>
using namespace std;

int t, n;

int dp(int n) {
    vector<int> arr(n + 1, 0);
    arr[1] = 1;
    if (n >= 2) {
        arr[2] = 2;
    }
    if (n >= 3) {
        arr[3] = 4;
    }
    for (int i = 4; i <= n; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    return arr[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << dp(n) << endl;
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 27.
//
