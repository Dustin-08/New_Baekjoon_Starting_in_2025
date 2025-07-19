#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, firstRnd, secondRnd;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> firstRnd;
        sum += abs(firstRnd);
    }

    for (int i = 0; i < n; ++i) {
        cin >> secondRnd;
        sum += abs(secondRnd);
    }
    cout << sum << endl;


    return 0;
}
//
// Created by 최승우 on 25. 7. 19.
//
