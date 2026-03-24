#include <iostream>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    cout << s << endl;
    return 0;
}//
// Created by 최승우 on 26. 3. 24.
//
