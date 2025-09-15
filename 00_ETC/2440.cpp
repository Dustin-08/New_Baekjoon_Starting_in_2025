#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = n; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 10.
//
