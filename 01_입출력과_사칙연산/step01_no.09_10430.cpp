#include <iostream>
using namespace::std;

int A, B, C; 

int main() {
    cin >> A >> B >> C;
    cout << (A+B)%C << "\n" << ((A%C)+(B%C))%C << "\n" << (A*B)%C << "\n" << ((A%C)*(B%C))%C;

    return 0;
}