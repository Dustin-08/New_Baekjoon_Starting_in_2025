// vector에서 erase로 원소 삭제시, 내부적으로 뒤에 있는 요소들을 모두 한칸씩 이동시켜서 시간 복잡도가 O(n^2) 증가하여 시간초과 발생됨
// vector로 풀 수도 있지만 queue를 통해서 pop push를 진행하는 것이 더 좋음
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, x;
queue<int> q;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            q.push(x);
        } else if (str == "pop") {
            if (q.empty()) {
                cout << "-1" << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        } else if (str == "front") {
            if (q.empty()) {
                cout << "-1" << endl;
            } else {
                cout << q.front() << endl;
            }
        } else if (str == "back") {
            if (q.empty()) {
                cout << "-1" << endl;
            } else {
                cout << q.back() << endl;
            }
        } else if (str == "size") {
            cout << q.size() << endl;
        } else if (str == "empty") {
            if (q.empty()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 13.
//
