#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> v(5);
        for (int i = 0; i < 5; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        v.erase(v.begin());
        v.pop_back();
        int first = 0;
        int middle = 0;
        int last = 0;
        for (int i = 0; i < v.size(); ++i) {
            if (i == 0) {
                first = v[i];
            } else if (i == 1) {
                middle = v[i];
            } else if (i == 2) {
                last = v[i];
            }
        }
        int sum = first + middle + last;
        if (last - first >= 4) {
            cout << "KIN" << endl;
        } else {
            cout << sum << endl;
        }
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
