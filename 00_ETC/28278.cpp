#include <iostream>
#include <stack>
using namespace std;

int n, cmd, x;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> x;
            st.push(x);
        } else if (cmd == 2) {
            if (st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
                st.pop();
            }
        } else if (cmd == 3) {
            cout << st.size() << "\n";
        } else if (cmd == 4) {
            if (st.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (cmd == 5) {
            if (st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
            }
        }
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
