#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    vector<int> v(5);
    for (int i = 0; i < 5; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    int avg = sum / 5;
    sort(v.begin(), v.end());
    cout << avg << endl;
    cout << v[2] << endl;

    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
