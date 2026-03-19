#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cctype>
using namespace std;

vector<int> dp;

int solution(int x) {
    if (x == 1) return 1;
    if (x == 2) return 2;
    if (dp[x] != -1) return dp[x]; // dp에 값이 있다면 바로 리턴
    dp[x] = (solution(x - 1) + solution(x - 2)) % 10007;
    return dp[x];
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n = 0;
    cin >> n;
    dp.resize(n + 1, -1);
    cout << solution(n) << "\n";
    return 0;
}//
// Created by 최승우 on 26. 3. 19.
//
