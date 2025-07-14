// vector 2차원으로 입력을 받은 후
// dp 1차원으로 무게 대비 가치 계산
#include <iostream>
#include <vector>

using namespace std;

// n=물건의 수, k=버틸 수 있는 무게, w=물건의 무게, v=물건의 가치
int n, k, w, v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    vector<vector<int> > bag(n, vector<int>(2, 0));
    for (int w = 0; w < n; ++w) {
        for (int v = 0; v < 2; ++v) {
            cin >> bag[w][v];
        }
    }

    vector<int> dp(k + 1, 0);
    for (int i = 0; i < n; ++i) {
        int weight = bag[i][0];
        int value = bag[i][1];
        for (int j = k; j >= weight; --j) {
            // 물건 중복으로 넣는 것 바지 위해, j를 k부터 weight까지 역순으로 돌기
            dp[j] = max(dp[j], dp[j - weight] + value);
        }
    }
    cout << dp[k] << endl;

    return 0;
}
//
// Created by 최승우 on 25. 7. 15.
//
