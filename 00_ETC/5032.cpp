#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    // e=소유중인 빈병의 수, f=그날 발견한 빈병의 수, f=새병 바꿔주는 빈병갯수
    int e, f, c;
    cin >> e >> f >> c;

    int sum = 0;
    sum = e + f;
    int result = 0;
    // 빈병을 새병으로 교환후 다마시면 다시 빈병이 생김
    while (sum >= c) {
        int newCola = sum / c;
        result += newCola;
        sum = sum % c + newCola;
    }
    cout << result << endl;
    return 0;
}
//
// Created by 최승우 on 25. 9. 5.
//
