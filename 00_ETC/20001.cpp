#include <iostream>
using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int questionCnt = 0;
    while (true) {
        getline(cin, str);
        if (str == "문제") {
            ++questionCnt;
        } else if (str == "고무오리") {
            if (questionCnt > 0) {
                --questionCnt; // 문제 해결
            } else {
                questionCnt += 2; // 문제 없을시 두개 추가
            }
        } else if (str == "고무오리 디버깅 끝") {
            break;
        }
    }

    if (questionCnt == 0) {
        cout << "고무오리야 사랑해";
    } else {
        cout << "힝구";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 19.
//
