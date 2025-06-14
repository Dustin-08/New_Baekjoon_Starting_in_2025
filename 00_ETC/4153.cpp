//
// Created by 최승우 on 25. 6. 15.
//
#include <iostream>
#include <cmath> // pow() 사용 위함
using namespace::std;

int a, b, c;

int main() {
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        int A = pow(a, 2); // a의 제곱
        int B = pow(b, 2);
        int C = pow(c, 2);
        if ((A == B + C) || (B == A + C) || (C == A + B)) {
            cout << "right" << "\n";
        } else {
            cout << "wrong" << "\n";
        }
    }
}
