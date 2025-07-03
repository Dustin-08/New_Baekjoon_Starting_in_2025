#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int max_value = arr[n - 1];

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (double) arr[i] / max_value * 100;
    }
    cout << fixed;
    cout.precision(6);
    cout << sum / n;
    return 0;
}
//
// Created by 최승우 on 25. 7. 3.
//
