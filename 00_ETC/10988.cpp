#include <iostream>
#include <algorithm>
using namespace::std;

string str;
string str2r;

int main() {
    cin >> str;
    str2r = str; // 문자열을 뒤집기 위해 원본복사(=reverse는 return만 하기에 변수로 저장이 어려움)
    reverse(str2r.rbegin(), str2r.rend());
    if (str == str2r) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}

//
// Created by 최승우 on 25. 6. 15.
//
