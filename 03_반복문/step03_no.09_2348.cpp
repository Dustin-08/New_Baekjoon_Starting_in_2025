#include <iostream>
using namespace::std;

int n;

int main() {
    cin >> n;
    for(int i = 0; i < n; ++i){
        cout << "*";
        for(int j = 0; j < i; ++j){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}