// 브루투포스(완전탐색)
// 탐색
#include <iostream>
using namespace::std;

int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    // 가능한 생성자 다 찾기
    for (int i = 1; i < n; ++i) {
        int m = i;
        int x = i;
        while (x != 0) {
            m += x % 10;
            x /= 10; // 숫자 자릿수마다 나누기
        }
        if (m == n) {
            cout << i;
            return 0; // break; 사용시 생성자가 있다면 뒤에 cout<<0;이 붙어버려서 return 0; 써야함.
        }
    }
    cout << 0;
    return 0;
}

//
// Created by 최승우 on 25. 6. 18.
//
