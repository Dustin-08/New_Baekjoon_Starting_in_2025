#include <iostream>
#include <string>
using namespace std;

int t;
string n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--) {
        cin >> n;
        int cnt = 0;
        //for (char c: n) { // 범위 기반 for문 (string을 char c로 바꾼 후 반복해라
        for (int i = 0; i < n.length(); ++i) {
            char c = n[i];
            if (c == 'U') {
                cnt++;
            } else {
                break;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}

//
// Created by 최승우 on 25. 6. 30.
//
