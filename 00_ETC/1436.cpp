#include <iostream>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int number = 666;
    int cnt = 0;
    while (true) {
        if (to_string(number).find("666") != string::npos) {
            // "666" 포함 여부 확인(최소 6이 3개 있어야함)
            ++cnt; // 종말의 수 찾으면 cnt 증가
            if (cnt == n) {
                cout << number;
                break;
            }
        }
        ++number;
    }


    return 0;
}

//
// Created by 최승우 on 25. 7. 3.
//
