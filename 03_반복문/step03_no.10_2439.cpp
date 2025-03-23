#include <iostream>
using namespace::std;

int n;

int main() {
    cin >> n;
    for(int i = n; i > 0; --i){
        for(int j = i-1; j > 0; --j){
            cout << " ";
        }
        for(int k = 0; k <= n-i; ++k){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}