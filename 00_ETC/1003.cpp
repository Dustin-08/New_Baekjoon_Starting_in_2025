// 처음엔 DP가 아닌 기존에 주어진 피보나치 함수(재귀)를 사용해서 cnt 형식으로 문제를 품
// but, 그렇게 할시 시간 초과 발생
#include <iostream>
using namespace std;

int t, n;
int dp[41][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    // 초깃값
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;

    for (int i = 2; i < 41; ++i) {
        dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
        dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
    }
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << dp[n][0] << " " << dp[n][1] << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 14.
//
