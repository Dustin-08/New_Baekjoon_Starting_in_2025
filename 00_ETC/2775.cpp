#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int t, k, n;
int apt[15][15];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> k >> n;
        for (int j = 0; j <= k; ++j) {
            for (int l = 1; l <= n; ++l) {
                if (j == 0) {
                    apt[j][l] = l;
                } else {
                    apt[j][l] = apt[j][l - 1] + apt[j - 1][l];
                }
            }
        }
        cout << apt[k][n] << "\n";
    }

    return 0;
}

/*
 * Test Case: 2
 * 0층의 i호에는 i호
 * 0층의 1호에는 1명, 0층 2호에는 2명, 0층 3호에는 3명
 * 1층의 1호에는 1명, 1층 2호에는 3명, 2층 3호에는 6명
 * k: 1, n: 3
 * -> 0층의 1, 2, 3호 => 1+2+3=6
 * k: 2, n: 3
 * -> 1층의 1, 2, 3호 =>  1+3+6=10
 */
//
// Created by 최승우 on 25. 6. 25.
//
