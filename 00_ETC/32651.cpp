// 인간이란 무엇인가
#include <iostream>

using namespace::std;

// N=
int N;

int main() {
    cin >> N;
    if (N >= 100000) {
        if (N % 1024 == 0) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }
    return 0;
}

//
// Created by 최승우 on 25. 6. 11.
//
