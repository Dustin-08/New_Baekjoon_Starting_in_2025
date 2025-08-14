#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    deque<int> q;

    for (int i = 0; i < n; ++i) {
        int x;
        string s;
        cin >> s;
        if (s == "push_back") {
            cin >> x;
            q.push_back(x);
        } else if (s == "push_front") {
            cin >> x;
            q.push_front(x);
        } else if (s == "pop_front") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
                q.pop_front();
            }
        } else if (s == "pop_back") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.back() << endl;
                q.pop_back();
            }
        } else if (s == "front") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
            }
        } else if (s == "back") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.back() << endl;
            }
        } else if (s == "empty") {
            cout << (q.empty() ? 1 : 0) << endl;
        } else if (s == "size") {
            cout << (int) q.size() << endl;
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 12.
//
