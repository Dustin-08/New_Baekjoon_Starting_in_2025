#include <iostream>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int x = 0, y = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (x < y) {
            cout << "NO BRAINS" << endl;
        } else {
            cout << "MMM BRAINS" << endl;
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 20.
//
