#include <iostream>
using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    const char *chars = str.c_str();
    int cnt = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (chars[i] == 'a' || chars[i] == 'e' || chars[i] == 'i' || chars[i] == 'o' || chars[i] == 'u') {
            ++cnt;
        }
    }
    cout << cnt << endl;

    return 0;
}
//
// Created by 최승우 on 25. 7. 31.
//
