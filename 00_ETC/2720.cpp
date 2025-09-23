#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    /* 쿼터(Quarter, $0.25)
     * 다임(Dime, $0.10)
     * 니켈(Nickel, $0.05)
     * 페니(Penny, $0.01) */
    for (int i = 0; i < n; ++i) {
        int change;
        cin >> change;
        int qCnt = 0, dCnt = 0, nCnt = 0, pCnt = 0;

        // change로 나눈 몫 == 사용 갯수
        // 나머지를 다시 change에 저장
        qCnt = change / 25;
        change %= 25;
        dCnt = change / 10;
        change %= 10;
        nCnt = change / 5;
        change %= 5;
        pCnt = change / 1;
        change %= 1;

        cout << qCnt << ' ' << dCnt << ' ' << nCnt << ' ' << pCnt << endl;
    }
    return 0;
}


//
// Created by 최승우 on 25. 9. 23.
//
