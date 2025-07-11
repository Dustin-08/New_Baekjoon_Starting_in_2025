// 그리디로 x, DP로 ㄱㄱ
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
    // dp[i]는 i를 1로 만들기 위한 최소 연산 횟수를 저장하는 배열
    vector<int> dp(n + 1); // dp[0]은 사용 x
    dp[1] = 0; // 1은 이미 1, 연산횟수는 0
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + 1; // 3가지 연산 중 한개의 연산을 사용해서 +1을 함
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }
    cout << dp[n];
    return 0;
}
//
// Created by 최승우 on 25. 7. 11.
//
