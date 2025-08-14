#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int minValue = 0;
    minValue = min({x, y, w - x, h - y});
    cout << minValue << endl;
    return 0;
}
//
// Created by 최승우 on 25. 8. 14.
//
