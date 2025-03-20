#include <iostream>
using namespace::std;

// x == 총금액
// n == 종류의 수
int x, n, a, b, sum;

int main() {
    cin >> x >> n;
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        sum = sum + (a * b);
    }
    if(sum == x){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}