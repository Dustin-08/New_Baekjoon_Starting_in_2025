#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> arr(5);
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i < arr[j].length()) {
                cout << arr[j][i];
            }
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 8.
//
