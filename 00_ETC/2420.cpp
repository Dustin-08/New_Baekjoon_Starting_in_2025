#include <iostream>
#include <cmath>

using namespace std;

long long a, b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    long long sum = abs(a - b);

    cout << sum << "\n";

    return 0;
}
//
// Created by 최승우 on 25. 7. 4.
//
