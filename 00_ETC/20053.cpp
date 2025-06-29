#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int t, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        vector<int> numbers(n);
        for (int j = 0; j < n; ++j) {
            cin >> numbers[j];
        }
        int min_val = numbers[0];
        int max_val = numbers[0];
        for (int j = 1; j < n; ++j) {
            min_val = min(min_val, numbers[j]);
            max_val = max(max_val, numbers[j]);
        }
        cout << min_val << " " << max_val << "\n";
    }
    return 0;
}

//
// Created by 최승우 on 25. 6. 28.
//

