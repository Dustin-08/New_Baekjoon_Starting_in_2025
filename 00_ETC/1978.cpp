#include <iostream>
using namespace std;

int n;
int arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        bool is_prime = true;
        if (arr[i] < 2) {
            is_prime = false;
        } else {
            for (int j = 2; j < arr[i]; ++j) {
                if (arr[i] % j == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime) {
            ++cnt;
        }
    }
    cout << cnt << "\n";
    return 0;
}
//
// Created by 최승우 on 25. 7. 3.
//
