#include <iostream>

using namespace::std;

int sum;
int arr[10];

int main() {
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    for(int i = 0; i < 9; ++i){
        cin >> arr[i];
    }
    // 1. 비교해서 큰값 우선 추출
    for(int i = 0; i < 9; ++i){
        sum = max(sum, arr[i]);
    }
    cout << sum << "\n";
    
    // 2. 몇번째 인지 확인 후 출력
    int cnt = 0;
    for(int i = 0; i < 9; ++i){
        if(arr[i] != sum){
            cnt++;
        }else{
            cout << cnt+1;
        }
    }
    return 0;
}