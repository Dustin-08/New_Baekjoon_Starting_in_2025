#include <iostream>
using namespace::std;

//int A, B; // 최종 합계 변수만 float로 바꾼다고 해도 소수점이 안나오기에, 반드시 입력하는 변수의 자료형도 바꾸어주어야함
//float A, B, sum;
double A, B, sum; // float와 double의 차이 알기

int main() {
    cin >> A >> B;
    sum = A/B;
    cout.precision(15); // 출력하는 소수점을 15자리로 고정 
    cout << sum;

    return 0;
}