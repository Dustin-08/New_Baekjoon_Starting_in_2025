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
    // m*2인 2차원 벡터를 0으로 초기화 하여 선언
    // 참고: http://developer-cat.tistory.com/17
    vector<vector<int> > v(n, vector<int>(2, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> v[i][j];
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 9.
//
