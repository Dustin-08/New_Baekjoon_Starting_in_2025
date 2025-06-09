#include <iostream>

using namespace::std;

int arr[10];
int maxValue;

int main() {
    for (int i = 0; i < 9; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < 9; ++i) {
        maxValue = max(maxValue, arr[i]);
    }
    cout << maxValue << "\n";
    for (int i = 0; i < 9; ++i) {
        if (maxValue == arr[i]) {
            cout << i + 1;
        }
    }
    return 0;
}
