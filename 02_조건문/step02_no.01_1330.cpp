#include <iostream>
using namespace::std;

int A, B;

int main() {
    cin >> A >> B;
    
    if(A > B){
        cout << ">";
    }else if(A < B){
        cout << "<";
    }else{
        cout << "==";
    }

    return 0;
}