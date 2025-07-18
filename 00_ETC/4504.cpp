#include <iostream>
#include <string>
using namespace std;

int n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while (true) {
        cin >> m;

        if (m == 0) {
            break;
        } else {
            if (m % n == 0) {
                cout << m << " is a multiple of " << n << "." << endl;
            } else {
                cout << m << " is NOT a multiple of " << n << "." << endl;
            }
        }
    }
}
//
// Created by 최승우 on 25. 7. 18.
//
