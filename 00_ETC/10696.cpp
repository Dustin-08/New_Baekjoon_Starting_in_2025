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
        string n;
        long long x = 0;
        cin >> n >> x;
        long long rem = 0;
        for (char c: n) {
            rem = (rem * 10 + (c - '0')) % x;
        }
        cout << "Case " << i + 1 << ": " << rem << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 29.
//
