// DFS(깊이우선탐색) vs BFS(너비우선탐색) 중 둘다 가능
#include <iostream>
#include <queue>
using namespace std;
#define MAX 101

int n, couple;
int cnt = 0;
int arr[MAX][MAX];
bool visited[MAX] = {0,};
queue<int> q;

// 함수형 bfs 제작
void bfs(int start) {
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        start = q.front();
        q.pop();
        for (int i = 1; i <= n; ++i) {
            if (arr[start][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = true;
                ++cnt;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> couple;
    for (int i = 0; i < couple; ++i) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    bfs(1); // 1을 기준으로 감염 컴퓨터 확인

    cout << cnt;

    return 0;
}
//
// Created by 최승우 on 25. 7. 16.
//
