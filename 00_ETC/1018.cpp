// 2차원 벡터 입력 받은 후, 브루트포스 진행
// 입력받는 체스판이 띄어쓰기가 없기에 string으로 받고 char 배열로 변환하기
// 코드 참고: https://velog.io/@minlee01/C-%EB%B0%B1%EC%A4%80-1018-%EC%B2%B4%EC%8A%A4%ED%8C%90-%EB%8B%A4%EC%8B%9C-%EC%B9%A0%ED%95%98%EA%B8%B0

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    cin.ignore();
    // n*m 벡터 선언과 동시에 초기화
    vector<vector<char> > v(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        string str;
        getline(cin, str);
        for (int j = 0; j < m; ++j) {
            v[i][j] = str[j];
        }
    }

    char WB[8][8] = {
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'
    };

    char BW[8][8] = {
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
        'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
        'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'
    };
    int min_cnt = 64, tmp = 0;
    for (int i = 0; i <= n - 8; ++i) {
        for (int j = 0; j <= m - 8; ++j) {
            int cnt_w = 0, cnt_b = 0;
            for (int x = 0; x < 8; ++x) {
                for (int y = 0; y < 8; ++y) {
                    if (v[i + x][j + y] != BW[x][y]) {
                        ++cnt_b;
                    }
                    if (v[i + x][j + y] != WB[x][y]) {
                        ++cnt_w;
                    }
                }
            }
            tmp = min(cnt_w, cnt_b);
            min_cnt = min(min_cnt, tmp);
        }
    }
    cout << min_cnt;
    return 0;
}

//
// Created by 최승우 on 25. 7. 9.
//
