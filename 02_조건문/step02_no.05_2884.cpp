#include <iostream>
using namespace::std;

int h, m;

int main() {
    cin >> h >> m;
    
    if(m - 45 < 0){
        if(h-1<0){
            h = 24 - 1;
            cout << h << " " << m+15;
        }else{
            cout << h-1 << " " << m+15;
        }
    }else{
        cout << h << " " << m-45;
    }

    return 0;
}