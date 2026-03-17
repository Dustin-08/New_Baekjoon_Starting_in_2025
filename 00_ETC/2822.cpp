#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> score(8);
    vector<int> scoreCpy(8);
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        cin >> score[i];
    }

    // 1. 상위 5개의 점수의 합 출력
    // 2. 높은 점수 5개의 위치 파악
    // 방법1: 오름차순 정렬 후, 상위 5개를 비교 대입
    // 방법2: 서로서로 빅교해가면서 상위값 찾기
    scoreCpy = score;
    // 원본 벡터 복사 및 정렬
    sort(scoreCpy.begin(), scoreCpy.end());
    // 상위 5개 값만 저장해둘 벡터 생성
    vector<int> result(5);
    for (int i = 3; i < scoreCpy.size(); ++i) {
        result[i - 3] = scoreCpy[i];
        sum += result[i - 3];
    }
    cout << sum << endl;
    // 이중 for문으로 동일 부분 찾기
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < result.size(); ++j) {
            if (result[j] == score[i]) {
                cout << i + 1 << ' ';
            }
        }
    }
    return 0;
}//
// Created by 최승우 on 26. 3. 17.
//
