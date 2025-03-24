// 이분탐색, binary_search
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
        // upper랑 lower는 중복 발생시 이슈 발생
        //cout << upper_bound(arr, arr+n, com[i]) - lower_bound(arr, arr+n, com[i]) << " ";
        cout << binary_search(arr, arr+n, com[i]) << "\n";
    }
    return 0;
}