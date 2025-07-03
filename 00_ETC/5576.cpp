#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arrW;
vector<int> arrK;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    arrW.resize(10);
    arrK.resize(10);

    for (int i = 0; i < 10; ++i) {
        cin >> arrW[i];
    }
    for (int i = 0; i < 10; ++i) {
        cin >> arrK[i];
    }
    sort(arrW.begin(), arrW.end());
    sort(arrK.begin(), arrK.end());

    int sumW = 0, sumK = 0;
    for (int i = 9; i > 6; --i) {
        sumW += arrW[i];
    }
    for (int i = 9; i > 6; --i) {
        sumK += arrK[i];
    }
    cout << sumW << "\n";
    cout << sumK;
    return 0;
}

//
// Created by 최승우 on 25. 7. 3.
//
