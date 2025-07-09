#include <iostream>
using namespace std;

int n;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore(); // 앞에서 들어온 n의 입력 버퍼 clear
    for (int i = 0; i < n; ++i) {
        getline(cin, str);

        int c = str[0];
        if (c >= 'a' && c <= 'z') {
            str[0] = toupper(c);
        }
        cout << str << "\n";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 9.
//
