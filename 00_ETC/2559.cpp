#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    int arr[n];
    // 배열 입력 받기
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        // 우선 합 구하기
        sum += arr[i];
    }
    int max = sum;
    for (int i = k; i < n; ++i) {
        // S' = S - A + B
        sum += arr[i] - arr[i - k];

        if (sum > max) {
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
//
// Created by 최승우 on 25. 11. 5.
//
