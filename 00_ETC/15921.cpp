#include <iostream>
#include <cmath>
using namespace std;

double n;
double arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    double sum = 0;
    double average = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;

    double expectedValue = 0;
    for (int i = 0; i < n; ++i) {
        expectedValue += arr[i] * 1 / n;
    }
    if (n == 0 || expectedValue == 0) {
        cout << "divide by zero";
    } else {
        cout << "1.00";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 1.
//
