#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, sum = 0;
    for (int i = 0; i < 4; ++i) {
        cin >> n;
        sum += n;
    }
    if (sum + 300 <= 1800) {
        cout << "Yes" << endl;
    } else if (sum + 300 > 1800) {
        cout << "No" << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
