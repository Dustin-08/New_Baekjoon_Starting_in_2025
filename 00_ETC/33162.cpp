#include <iostream>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();

    int currentLoc = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            currentLoc = currentLoc + 3;
        } else if (i % 2 == 0) {
            currentLoc = currentLoc - 2;
        }
    }
    cout << currentLoc;
    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
