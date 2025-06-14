#include <iostream>
#include <stack>
using namespace::std;

// k == 입력 줄 갯수, insert == 입력값, sum == 스택값들의 합
int k, insert, sum;

int main() {
    // int 형 stack 생성
    stack<int> stack;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> insert;
        if (insert == 0) {
            stack.pop(); // 입력값 중 앞의 값 스택에서 빼기
        } else {
            stack.push(insert); // 입력값 스택에 넣기
        }
    }

    // 비었으면 값이 없으니 0 출력
    sum = 0;

    // 스택이 비어있지 않으면 하나씩 top부터 하나씩 더해서 출력
    while (!stack.empty()) {
        //cout << stack.top() << "\n";
        sum = sum + stack.top();
        stack.pop();
    }
    cout << sum;
    return 0;
}

//
// Created by 최승우 on 25. 6. 15.
//
