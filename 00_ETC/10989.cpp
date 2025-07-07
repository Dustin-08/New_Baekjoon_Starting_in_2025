#include <iostream>
#include <algorithm>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int arr[10001] = {};
    for (int i = 0; i < n; ++i) {
        int in;
        cin >> in;
        arr[in] += 1;
    }
    for (int i = 0; i < 10001; ++i) {
        for (int j = 0; j < arr[i]; ++j) {
            cout << i << "\n";
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 7.
//
