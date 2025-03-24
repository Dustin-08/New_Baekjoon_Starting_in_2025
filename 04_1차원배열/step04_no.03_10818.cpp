#include <iostream>
#include <algorithm>
using namespace::std;

// 입력 갯수: n
// 작은수: a
// 큰수: b
int n, a, b;
int arr[1000001];

int main() {
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << arr[0] << " " << arr[n-1];
    return 0;
}