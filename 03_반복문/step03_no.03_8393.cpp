#include <iostream>
using namespace::std;

int n, sum;

int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}