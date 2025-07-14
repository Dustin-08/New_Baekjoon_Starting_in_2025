// 처음에는 str을 char로 바꾼 후 한글자마다 숫자인지 ,인지 파악해서 계산을 할려 했음
// 하지만 find(',')와 substr을 사용하면 쉽게 구현 가능

#include <iostream>
#include <string>

using namespace std;

int t;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    cin.ignore();

    while (t--) {
        getline(cin, str);

        int commaPos = str.find(',');
        int a = stoi(str.substr(0, commaPos));
        int b = stoi(str.substr(commaPos + 1));

        cout << a + b << endl;
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 15.
//
