#include <iostream>

using namespace std;

int n, k, result4;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    // 이항 계수 = n! / (n-k)!k!
    int result1 = 1;
    for (int i = n; i > 0; --i) {
        result1 *= i;
    }
    int result2 = 1;
    for (int i = n - k; i > 0; --i) {
        result2 *= i;
    }
    int result3 = 1;
    for (int i = k; i > 0; --i) {
        result3 *= i;
    }
    result4 = result1 / (result2 * result3);
    cout << result4 << "\n";
    return 0;
}

//
// Created by 최승우 on 25. 7. 8.
//
