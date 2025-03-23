#include <iostream>
using namespace::std;

int a, b;

int main() {
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    while(true){
        cin >> a >> b;
        if((a == 0) && (b == 0)){
            break;
        }else{
            cout << a + b << "\n";
        }
    }
    return 0;
}