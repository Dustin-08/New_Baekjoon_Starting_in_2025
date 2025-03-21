#include <iostream>
using namespace::std;

int n;

int main() {
    cin >> n;
    n = n / 4;
    for(int i = 0; i < n; ++i){
        cout << "long ";
    }
    cout << "int";
    return 0;
}