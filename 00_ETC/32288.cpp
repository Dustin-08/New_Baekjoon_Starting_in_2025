#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        if (c == 'I') {
            c = tolower(c);
            cout << c;
        } else if (c == 'l') {
            c = toupper(c);
            cout << c;
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 14.
//
