#include <iostream>
#include <string.h>
using namespace std;

int n;
string str;
char ch[81];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        int sum = 0, cnt = 0;
        for (int j = 0; j < str.size(); ++j) {
            strcpy(ch, str.c_str());
            if (ch[j] == 'O') {
                cnt++;
                sum += cnt;
            } else if (ch[j] == 'X') {
                cnt = 0;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 9.
//
