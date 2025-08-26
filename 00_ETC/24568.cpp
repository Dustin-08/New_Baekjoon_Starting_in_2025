#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int regularBox, smallBox;
    cin >> regularBox;
    cin >> smallBox;

    int sum = 0;
    sum = regularBox * 8 + smallBox * 3;
    cout << sum - 28 << endl;
    return 0;
}
//
// Created by 최승우 on 25. 8. 27.
//
