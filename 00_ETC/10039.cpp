#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        if (num < 40) {
            num = 40;
            sum += num;
        } else {
            sum += num;
        }
    }
    cout << sum / 5;
    return 0;
}
//
// Created by 최승우 on 25. 7. 30.
//
