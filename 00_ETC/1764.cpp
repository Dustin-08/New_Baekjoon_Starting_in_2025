#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    vector<string> unheard(n);
    vector<string> result;

    for (int i = 0; i < n; ++i) {
        // 듣도 못한 사람
        cin >> unheard[i];
    }
    sort(unheard.begin(), unheard.end()); // 정렬

    for (int i = 0; i < m; ++i) {
        // 보도 못한 사람
        string name;
        cin >> name;

        // 이진탐색으로 듣도 못한 사람 벡터에 보도 못한 사람있는지 확인
        if (binary_search(unheard.begin(), unheard.end(), name)) {
            result.push_back(name); // 있다면 result 벡터에 이름 삽입
        }
    }

    sort(result.begin(), result.end()); // 사전순 정렬을 위해 정렬

    cout << result.size() << "\n"; // 듣보 사람 수
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << "\n";
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 9.
//
