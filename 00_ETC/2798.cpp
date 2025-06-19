// 브루트포스

#include <iostream>
using namespace::std;

int n, m;
int arr[101];
int card_set;
int max_set = 0;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // 3카드로 나오는 경우의 수 찾기
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                card_set = arr[i] + arr[j] + arr[k];
                if (card_set <= m && max_set < card_set) {
                    max_set = card_set;
                }
            }
        }
    }
    cout << max_set;
    return 0;
}

//
// Created by 최승우 on 25. 6. 19.
//
