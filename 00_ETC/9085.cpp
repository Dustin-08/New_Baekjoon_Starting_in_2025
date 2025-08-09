#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; ++i) {
        int n;
        cin >> n;
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 9.
//
