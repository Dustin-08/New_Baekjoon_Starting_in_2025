#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 3) {
        return 1;
    }
    long long f1 = 1, f2 = 1, f3 = 1, result = 1;

    for (int i = 4; i <= n; ++i) {
        result = f3 + f1;
        f1 = f2;
        f2 = f3;
        f3 = result;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
//
// Created by 최승우 on 25. 8. 26.
//
