#include <iostream>
#include <queue>
using namespace std;

int n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    cout << "<";
    while (q.size() > 1) {
        for (int i = 1; i < k; i++) {
            int tmp = q.front();
            q.pop(); // 빼내기
            q.push(tmp); // 뒤에 다시 넣기
        }
        cout << q.front() << ", "; // k가 3이면 3 출력 후 콤마 붙이기
        q.pop();
    }
    cout << q.front() << ">";
    return 0;
}
//
// Created by 최승우 on 25. 7. 14.
//
