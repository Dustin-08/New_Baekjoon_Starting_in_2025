#include <iostream>

using namespace::std;

int A, B, C, money;

int main() {
    cin >> A >> B >> C;
    if((A == B) && (B == C) && (C == A)){
        money = 10000 + A * 1000;
        cout << money;
    }else if((A == B) || (B == C) || (C == A)){
        if(A == B){
            money = 1000 + A * 100;
            cout << money;
        }else if(B == C){
            money = 1000 + B * 100;
            cout << money;
        }else if(A == C){
            money = 1000 + C * 100;
            cout << money;
        }
    }else if((A != B) && (B != C) && (C != A)){
        if(((A > B) && (B > C)) || ((A > C) && (C > B))){
			money = A * 100;
			cout << money;
		}else if(((B > A) && (A > C)) || ((B > C) && (C > A))){
			money = B * 100;
			cout << money;
		}else if(((C > A) && (A > B)) || ((C > A) && (B > A))){
			money = C * 100;
			cout << money;
		}
    }

    return 0;
}