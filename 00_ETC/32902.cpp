#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 캔 k개, 캔마다 n개의 칩이 존재
    int k, n;
    cin >> k >> n;
    int minTime = n + 1;
    int maxTime = k * n + 1;
    cout << minTime << " " << maxTime << endl;
    return 0;
}
//
// Created by 최승우 on 25. 8. 22.
//
