#include <iostream>
using namespace::std;

/*
/ 몫
% 나머지

385 % 10 -> 38 / 5
385 % 100 -> 3 / 85
85 / 10 -> 8 / 5
*/

int A, B; 

int main() {
    cin >> A >> B;
    cout << A * (B%10) << "\n";
    cout << A * ((B%100)/10) << "\n";
    cout << A * ((B%1000)/100) << "\n";
    cout << A * B;
    return 0;
}