#include <iostream>
using namespace::std;

int n, a, b;

int main() {
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << "\n";
    }
    return 0;
}