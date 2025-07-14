// 초반엔 str을 입력받은 후 각 기호 별로 cnt를 써서 유효한 문장인지 아닌지 판별할려고 하였음
// stack을 사용하면 괄호의 짝 여부를 파악하기 좋음

#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        getline(cin, str);
        if (str == ".") {
            break;
        }
        stack<char> st;
        bool isValid = true;
        for (char c: str) {
            if (c == '(' || c == '[') {
                st.push(c);
            } else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    isValid = false;
                    break;
                }
                st.pop();
            } else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    isValid = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty()) {
            isValid = false;
        }
        cout << (isValid ? "yes" : "no") << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 15.
//
