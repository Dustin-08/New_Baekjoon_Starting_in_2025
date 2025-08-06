#include <iostream>
using namespace std;

int getHandShape(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 2) {
        return 1;
    }
    if (x == 5) {
        return 2;
    }
    return 3;
}

int judge(int a, int b) {
    if (a == 3 && b == 3) {
        return 0;
    }
    if (a == 3) {
        return -1;
    }
    if (b == 3) {
        return 1;
    }

    if (a == b) {
        return 0;
    }

    if ((a == 0 && b == 1) || (a == 1 && b == 2) || (a == 2 && b == 0)) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int j, i;
    cin >> j >> i;

    int a = getHandShape(j);
    int b = getHandShape(i);

    int res = judge(a, b);
    if (res == 1) {
        cout << ">";
    } else if (res == -1) {
        cout << "<";
    } else {
        cout << "=";
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 6.
//
