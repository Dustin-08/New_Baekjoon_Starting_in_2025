// vector에서 erase로 원소 삭제시, 내부적으로 뒤에 있는 요소들을 모두 한칸씩 이동시켜서 시간 복잡도가 O(n^2) 증가하여 시간초과 발생됨
// vector로 풀 수도 있지만 queue를 통해서 pop push를 진행하는 것이 더 좋음
#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        q.push(i + 1); // 1, 2, 3, 4, ... n까지 순서대로 push
    }
    while (q.size() > 1) {
        q.pop(); // 맨 위 카드 pop으로 버림(뺴내기)
        q.push(q.front()); // 그 다음 카드를 맨 아래로 push
        q.pop(); // 그다음 카드도 앞에서 제거(빼내기)
    }
    cout << q.front();
    return 0;
}
//
// Created by 최승우 on 25. 7. 9.
//
