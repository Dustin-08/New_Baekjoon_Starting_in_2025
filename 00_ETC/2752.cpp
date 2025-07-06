#include <iostream>
#include <algorithm>

using namespace std;

long long arr[4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    cout << arr[0] << " " << arr[1] << " " << arr[2];

    return 0;
}
//
// Created by 최승우 on 25. 7. 6.
//
