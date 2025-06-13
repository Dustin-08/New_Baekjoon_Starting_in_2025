// 양말 짝 맞추기
#include <iostream>
using namespace::std;

int arr[6];
int cnt[10]; // 0~9까지

int main() {
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
        cnt[arr[i]]++; // 동일값 확인을 위해 cnt 배열 안에 arr 배열 값을 넣고 cnt 함
    }
    for (int i = 0; i < 10; ++i) {
        if (cnt[i] & 1) {
            cout << i;
        }
    }
    return 0;
}

//
// Created by 최승우 on 25. 6. 13.
//
