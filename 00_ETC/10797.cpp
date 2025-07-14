#include <iostream>
using namespace std;

int day, carNum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> day;
    int cnt = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> carNum;
        if (carNum == day) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
//
// Created by 최승우 on 25. 7. 15.
//
