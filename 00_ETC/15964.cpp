#include <iostream>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long a, b;
    cin >> a >> b;
    long long total = (a + b) * (a - b);
    cout << total << endl;

    return 0;
}//
// Created by 최승우 on 25. 9. 25.
//
