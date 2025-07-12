#include <iostream>
#include <string>
using namespace::std;

string a, b, c, d;
string result1, result2;

int main() {
    cin >> a >> b >> c >> d;

    string result1 = a + b;
    string result2 = c + d;

    // 자연수의 크기가 너무 큼
    long long sum = 0;
    sum = stoll(result1) + stoll(result2);

    cout << sum;
    return 0;
}//
// Created by 최승우 on 25. 7. 12.
//
