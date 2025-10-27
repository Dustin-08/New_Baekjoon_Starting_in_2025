#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int h, m;
    cin >> h;
    cin >> m;

    int hour = h * 60;
    int total = hour + m;
    cout << total << endl;
    return 0;
}
//
// Created by 최승우 on 25. 10. 27.
//
