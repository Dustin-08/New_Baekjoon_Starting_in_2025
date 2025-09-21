#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    // s = 숭실대학교의 참여도
    // k = 고려대학교의 참여도
    // h = 한양대학교의 참여도
    int s, k, h;

    cin >> s >> k >> h;
    int total = 0;
    total = s + k + h;
    if (total >= 100) {
        cout << "OK";
    } else {
        int minVal = min({s, k, h});
        if (minVal == s) {
            cout << "Soongsil";
        }else if (minVal == k) {
            cout << "Korea";
        }else if (minVal == h) {
            cout << "Hanyang";
        }
    }

    return 0;
}
//
// Created by 최승우 on 25. 9. 21.
//
