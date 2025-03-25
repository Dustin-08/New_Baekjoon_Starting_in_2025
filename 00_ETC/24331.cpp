#include <iostream>
#include <algorithm>
using namespace::std;

// n = 첫번째 앨범의 우표 수
// m = 두번째 앨범의 우표 수
// fir[] = 첫번째 앨범의 스탬프의 고유번호
// sec[]
int n, m, cnt;
int fir[100001];
int sec[100001];
int sum[100001];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> fir[i];
    }
    
    sort(fir, fir+n);
    
    for(int i = 0; i < m; ++i){
        cin >> sec[i];
    }
    sort(sec, sec+m);
    
    for(int i = 0; i < m; ++i){
        int num = upper_bound(fir, fir+n, sec[i]) - lower_bound(fir, fir+n, sec[i]);
        if(num > 0){
            cnt++;
            sum[cnt-1] = sec[i];
        }
    }

    // 최종 첫번째줄: 일치하는 정수의 갯수
    cout << cnt << "\n";
    for(int i = 0; i < cnt; ++i){
        cout << sum[i] << " ";
    }
    // 최종 두번째줄: 일치하는 정수 오름차순 나열
    return 0;
}