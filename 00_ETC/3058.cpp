#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int arr[8];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        int min_arr = 101;
        for (int j = 0; j < 7; ++j) {
            cin >> arr[j];
        }
        for (int j = 0; j < 7; ++j) {
            if (arr[j] % 2 == 0) {
                sum += arr[j];
                min_arr = min(min_arr, arr[j]);
            }
        }
        cout << sum << " " << min_arr << "\n";
    }

    return 0;
}

//
// Created by 최승우 on 25. 6. 22.
//
