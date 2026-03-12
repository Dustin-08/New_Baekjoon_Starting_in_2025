#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    // n == 물건의 갯수
    // m == 박스의 크기

    int n, m;
    cin >> n >> m;

    // 우선 필수 박스
    int minineedBox = 0;
    minineedBox = (n + m - 1) / m;
    cout << minineedBox << endl;
    return 0;
}//
// Created by 최승우 on 26. 3. 12.
//
