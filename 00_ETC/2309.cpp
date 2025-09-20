#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(9);
    for (int i = 0; i < 9; ++i) {
        cin >> v[i];
    }
    // 오름차순 정렬
    sort(v.begin(), v.end());
    int total = 0;
    for (int i = 0; i < 9; ++i) {
        total += v[i];
    }
    for (int i = 0; i < 9; ++i) {
        // i+1로 중복 제거, 중복 for문으로 9개중 2개 요소 제거하끔
        for (int j = i + 1; j < 9; ++j) {
            // 전체 - 100 == 2개 요소의 값
            if (v[i] + v[j] == total - 100) {
                // 2개 원소를 제외한 값 출력
                for (int k = 0; k < 9; ++k) {
                    if (k != i && k != j) {
                        cout << v[k] << "\n";
                    }
                }
                return 0; // 정답 찾으면 종료
            }
        }
    }

    //return 0;
}
//
// Created by 최승우 on 25. 9. 20.
//
