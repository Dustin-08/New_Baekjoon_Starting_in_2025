#include <iostream>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= 2 * n - 1; ++i) {
        int stars, spaces;
        if (i <= n) {
            spaces = n - i;
            stars = 2 * i - 1;
        } else if (i > n) {
            spaces = i - n;
            stars = 2 * (2 * n - i) - 1;
        }

        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 21.
//
