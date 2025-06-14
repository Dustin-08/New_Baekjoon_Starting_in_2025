#include <iostream>
using namespace::std;

string n;

int main() {
    cin >> n;
    int result = 0;
    for (int i = 0; i < n.length(); ++i) {
        result = (result * 10 + (n[i] - '0')) % 20000303;
    }
    cout << result;
    return 0;
}

//
// Created by 최승우 on 25. 6. 15.
//
