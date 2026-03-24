#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cctype>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    // shot - 3점
    // field goal - 2점
    // free throw - 1점

    // Apple과 Banana 총 2팀이 있음
    int sumA = 0, sumB = 0;

    for (int i = 3; i > 0; --i) {
        int s;
        cin >> s;
        sumA += s * i;
    }
    for (int i = 3; i > 0; --i) {
        int s;
        cin >> s;
        sumB += s * i;
    }
    if (sumA > sumB) {
        cout << "A";
    } else if (sumB > sumA) {
        cout << "B";
    } else {
        cout << "T";
    }
    return 0;
}//
// Created by 최승우 on 26. 3. 25.
//
