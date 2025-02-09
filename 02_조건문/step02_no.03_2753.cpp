#include <iostream>
using namespace::std;

int year;

int main() {
    cin >> year;
    
    // 4의 배수이다 -> year % 4 == 0
    // 100의 배수가 아니다 -> year % 100 != 0
    // 400의 배수이다 -> year % 400 == 0
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "1";
    }else{
        cout << "0";
    }

    return 0;
}