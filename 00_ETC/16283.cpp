#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    // 양 한마리가 하루에 a그램 사료 먹음
    // 염소 한마리가 하루에 b그램 사료 먹음
    // 양 + 염소 = n
    // 하루동안 소비한 전체 사료의 양 = w그램
    int a, b, n, w;
    cin >> a >> b >> n >> w;

    // lamb + goat = n
    // lamb*a + goat*b = w
    int lambAns = 0, goatAns = 0, ansCnt = 0;
    for (int lamb = 1; lamb < n; ++lamb) {
        int goat = n - lamb;
        if (lamb * a + goat * b == w) {
            ++ansCnt;
            lambAns = lamb;
            goatAns = goat;
        }
    }
    if (ansCnt == 1) {
        cout << lambAns << " " << goatAns << endl;
    } else {
        cout << "-1";
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 19.
//
