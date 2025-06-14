// string to int == stoi
#include <iostream>
using namespace::std;

string a, b, c;

int main() {
    cin >> a >> b >> c;
    int sum1 = stoi(a) + stoi(b) - stoi(c);
    int sum2 = stoi(a + b) - stoi(c);
    cout << sum1 << "\n";
    cout << sum2;
}

//
// Created by 최승우 on 25. 6. 15.
//
