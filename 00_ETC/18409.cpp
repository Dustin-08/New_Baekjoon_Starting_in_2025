#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    string s;
    cin >> n;
    cin >> s;

    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    int moeumCnt = 0;
    for (char c: s) {
        for (int i = 0; i < 5; ++i) {
            if (c == arr[i]) {
                ++moeumCnt;
            }
        }
    }
    cout << moeumCnt << "\n";
    return 0;
}
//
// Created by 최승우 on 25. 10. 29.
//
