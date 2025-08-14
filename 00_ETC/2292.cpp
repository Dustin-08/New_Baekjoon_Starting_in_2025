#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (n == 1) {
        cout << "1";
        return 0;
    }

    int max_room = 1;
    int layer = 1;
    while (n > max_room) {
        max_room += 6 * layer;
        ++layer;
    }
    cout << layer << endl;
    return 0;
}
//
// Created by 최승우 on 25. 8. 13.
//
