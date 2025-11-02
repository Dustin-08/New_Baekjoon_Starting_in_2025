#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    // 수열을 벡터로 입력 받기
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // 정렬 안해줘도 되지만 하면 좋음
    sort(v.begin(), v.end());

    // 왼쪽 포인터, 오른쪽 포인터 선언
    int left = 0, right = n - 1, minVal = 2000000001;
    int finalLeft = 0, finalRight = 0;
    // 포인터의 위치(값이)가 최종적으로 서로 만났을(같아졌을) 때 최종 종료됨
    // 이걸 쓰는 이유가 완탐시 시간 복잡도를 줄일 수 있음
    while (left < right) {
        int sum = v[left] + v[right];
        if (abs(sum) < minVal) {
            minVal = abs(sum);
            finalLeft = v[left];
            finalRight = v[right];
        }
        if (sum > 0) {
            // 오른쪽 포인터 값이 크므로 감소시키기
            right--;
        } else if (sum < 0) {
            // 왼쪽 포인터 값이 작으므로 증감시키기
            left++;
        } else {
            break;
        }
    }
    cout << finalLeft << " " << finalRight << "\n";
    return 0;
}
//
// Created by 최승우 on 25. 11. 2.
//
