#include <iostream>
using namespace::std;

int t, a, b;

int main() {
    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> a >> b;
        int sum = a + b;
        cout << sum << "\n";
    }
    return 0;
}