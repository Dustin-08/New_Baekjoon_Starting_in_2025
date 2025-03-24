// 이분탐색 upper lower 사용
#include <iostream>
#include <algorithm>
using namespace::std;

// 가지고 있는 갯수: n
// 숫자 카드 정수: arr 배열
// 확인해보려는 수: m
int n, m, cnt;
int arr[10000001];
int com[10000001];

int main() {
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    // sort 정렬
    sort(arr, arr+n);
    
    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> com[i];
        // upper - lowerbound
        cout << upper_bound(arr, arr+n, com[i]) - lower_bound(arr, arr+n, com[i]) << " ";
    }
    // == 해버리면 같은 값이 아닌 주소로 비교해버림....
    // for(int i = 0; i < n; ++i){
    //     for(int j = 0; j < m; ++j){
    //         if(arr[i] == com[j]){
    //             cnt++;
    //             cout << "test";
    //         }
    //     }
    //     cout << cnt;
    // }
    return 0;
}