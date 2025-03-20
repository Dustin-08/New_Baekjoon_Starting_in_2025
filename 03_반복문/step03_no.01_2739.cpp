#include <iostream>
using namespace::std;

int n;

int main() {
    cin >> n;
    for(int i = 1; i < 10; ++i){
        int sum = n * i;
        cout << n << " * " << i << " = "<< sum << "\n";
    }
    return 0;
}