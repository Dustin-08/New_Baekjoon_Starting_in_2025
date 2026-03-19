#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    // 누적합 벡터
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i < n + 1; ++i) {
        cin >> v[i];
        // 누적합 벡터에 저장
        prefix[i] = prefix[i - 1] + v[i];
    }
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        /*
         * 100,000 × 100,000 = 10^10 -> 시간 초과 무조건 터짐
         * prefix sum(누적합)으로 변환 필요
        for (int j = a; j <= b; ++j) {
            sum += v[j];
        }
        */
        cout << prefix[b] - prefix[a - 1] << "\n";
    }
    return 0;
}//
// Created by 최승우 on 26. 3. 19.
//
