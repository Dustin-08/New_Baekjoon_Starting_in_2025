#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int lis(vector<int> &arr) {
    // 배열 크기를 모르기에
    vector<int> lis;
    // 향상된 for문
    for (int i: arr) {
        // auto시 자동 타입이 캐스팅됨
        // lower_bound는 탐색 범위, 범위 끝, 찾을 값
        // 이렇게 하면 i보다 처음으로 큰 값을 반환하게 됨
        auto it = lower_bound(lis.begin(), lis.end(), i);
        if (it == lis.end()) {
            lis.push_back(i);
        } else {
            // 포인터로 값을 바꿔주기
            *it = i;
        }
    }
    // 타입을 정해줘야히지만 안정화가 됨 ㅇㅇ
    return (int) lis.size();
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << lis(v);
    return 0;
}
//
// Created by 최승우 on 25. 11. 5.
//
