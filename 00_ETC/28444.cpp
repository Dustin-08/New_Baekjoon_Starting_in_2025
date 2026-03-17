#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int h, i, a, r, c;
    cin >> h >> i >> a >> r >> c;

    int firstSum = h * i;
    int secondSum = a * r * c;
    int sum = firstSum - secondSum;
    cout << sum << endl;
    return 0;
}//
// Created by 최승우 on 26. 3. 17.
//
