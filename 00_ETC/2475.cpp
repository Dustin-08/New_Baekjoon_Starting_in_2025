#include <iostream>
#include <cmath>
using namespace std;

int arr[6];
int sum = 0;
int pow_arr;
int final;

int main() {
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
        sum = sum + pow(arr[i], 2);
    }
    final = sum % 10;
    cout << final;
    return 0;
}

//
// Created by 최승우 on 25. 6. 20.
//
