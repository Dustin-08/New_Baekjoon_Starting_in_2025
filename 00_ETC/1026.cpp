#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[51];
int arr2[51];
int sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }
    // arr[i] 내림차순
    sort(arr, arr + n, greater<int>());
    // arr2[i] 오름차순
    sort(arr2, arr2 + n);
    for (int i = 0; i < n; ++i) {
        sum += arr[i] * arr2[i];
    }
    cout << sum << endl;
    return 0;
}

//
// Created by 최승우 on 25. 6. 20.
//
