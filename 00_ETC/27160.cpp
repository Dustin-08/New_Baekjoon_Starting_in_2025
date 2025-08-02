#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    map<string, int> v;
    for (int i = 0; i < n; ++i) {
        string name;
        int x;
        cin >> name >> x;
        v[name] += x;
    }

    for (auto &f: v) {
        if (f.second == 5) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
//
// Created by 최승우 on 25. 8. 2.
//
