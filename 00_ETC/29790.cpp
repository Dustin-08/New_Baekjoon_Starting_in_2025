#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, u, l;
    cin >> n >> u >> l;

    if (n >= 1000) {
        if (u >= 8000 || l >= 260) {
            cout << "Very Good";
        } else {
            cout << "Good";
        }
    } else {
        cout << "Bad";
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 4.
//
