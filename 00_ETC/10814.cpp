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
    vector<pair<int, string> > members(n); // 여기서 n을 추가 안해주면 push_back()으로 데이터를 수동 추가해줘야함
    for (int i = 0; i < n; ++i) {
        cin >> members[i].first >> members[i].second;
    }
    stable_sort(members.begin(), members.end(), [](const pair<int, string> &a, const pair<int, string> &b) {
        return a.first < b.first; // 나이만 비교하게 first 부분만 하고, string 부분은 유지
        // string 부분도 정렬시키면, 알파벳 순으로 정렬되서, 순서가 바뀜
    });
    for (int i = 0; i < n; ++i) {
        cout << members[i].first << " " << members[i].second << "\n";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 3.
//
