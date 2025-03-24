#include <iostream>
using namespace::std;

// 입력 갯수: n
// 비교수: x
int n, x;
int arr[100001];

int main() {
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    cin >> n >> x;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < n; ++i){
        if(arr[i] < x){
            cout << arr[i] << " ";
        }
    }
    return 0;
}