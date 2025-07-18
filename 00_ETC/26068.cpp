#include <iostream>
#include <string>
using namespace std;

int n;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();

    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        cin >> str;
        string numStr = str.substr(2); // D- 이후 2자리만 추출
        int day = stoi(numStr); // 정수 변환
        if (day <= 90) {
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
