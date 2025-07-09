#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int cnt = 0;
    vector<pair<string, int> > v(n);
    int maxScore = -1;

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
        if (v[i].second > maxScore) {
            maxScore = v[i].second;
        }
    }
    string highName = "~";
    for (int i = 0; i < n; ++i) {
        if (v[i].second == maxScore) {
            if (v[i].first < highName) {
                highName = v[i].first;
            }
        }
    }
    cout << highName;
    return 0;
}
//
// Created by 최승우 on 25. 7. 9.
//
