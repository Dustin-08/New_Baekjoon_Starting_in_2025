#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v(5);
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int n;
            cin >> n;
            sum += n;
        }
        v[i] = sum;
    }
    int maxValue = v[0];
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (v[i] > maxValue) {
            maxValue = v[i];
            maxIndex = i;
        }
    }
    cout << (maxIndex + 1) << " " << maxValue << endl;

    return 0;
}
//
// Created by 최승우 on 25. 8. 21.
//
