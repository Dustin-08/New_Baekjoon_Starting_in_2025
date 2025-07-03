#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n;

bool compare(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    }
    return a.size() < b.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << "\n";
    }
    return 0;
}

//
// Created by 최승우 on 25. 7. 3.
//
