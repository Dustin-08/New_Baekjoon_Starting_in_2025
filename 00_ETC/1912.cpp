// 연속된 수의 합이 기에 vector를 sort로 정렬 후 높은 값을 구하는 것이 아닌 dp로 푸는 것이 맞음
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
    vector<int> v(n), dp(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    // dp
    dp[0] = v[0];
    int maxSum = dp[0];

    for (int i = 1; i < n; ++i) {
        dp[i] = max(v[i], dp[i - 1] + v[i]);
        maxSum = max(maxSum, dp[i]);
    }

    cout << maxSum << endl;

    return 0;
}
//
// Created by 최승우 on 25. 7. 23.
//
