#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int playerAAtkPnt, playerBAtkPnt, playerALife, playerBLife;
    cin >> playerAAtkPnt >> playerALife;
    cin >> playerBAtkPnt >> playerBLife;

    while (true) {
        playerALife -= playerBAtkPnt;
        playerBLife -= playerAAtkPnt;
        if (playerALife <= 0 || playerBLife <= 0) {
            break;
        }
    }
    if (playerALife > 0 && playerBLife <= 0) {
        cout << "PLAYER A" << '\n';
    } else if (playerBLife > 0 && playerALife <= 0) {
        cout << "PLAYER B" << '\n';
    } else {
        cout << "DRAW" << '\n';
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 7.
//
