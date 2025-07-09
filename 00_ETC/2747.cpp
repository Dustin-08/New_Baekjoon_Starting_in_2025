#include<iostream>
using namespace std;

int n;

int main(){
    cin >> n;

    int sum = 0;

    if ( n == 0 ){
        cout << 0;
        return 0;
    }else {
        int a = 0, b = 1;
        for (int i = 2; i <= n; ++i){
            int tmp = b;
            b = a + b;
            a = tmp;
        }
        cout << b;
    }
    return 0;
}//
// Created by 최승우 on 25. 7. 9.
//
