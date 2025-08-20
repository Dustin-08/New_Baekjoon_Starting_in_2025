#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int n;
        cin >> n;
        if (n == -1) {
            break;
        }

        vector<int> v;
        int sum = 0;

        for (int i = 1; i < n; ++i) {
            if (n % i == 0) {
                v.push_back(i);
                sum += i;
            }
        }
        sort(v.begin(), v.end());
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i];
                if (i != v.size() - 1) {
                    cout << " + ";
                }
            }
            cout << endl;
        } else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 20.
//
