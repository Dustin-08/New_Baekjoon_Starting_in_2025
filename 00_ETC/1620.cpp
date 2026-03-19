#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    // 포켓몬의 개수: n, 맞춰야 하는 문제의 갯수 m
    cin >> n >> m;
    vector<string> v(n + 1); // n이 0이 아닌 1부터 시작하기에
    // 포켓몬 n개 입력 받기
    map<string, int> pokemon;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        pokemon[v[i]] = i;
    }
    // 문제 m개 입력 받기(string이나 int가 섞여 있음)
    for (int i = 0; i < m; ++i) {
        string question;
        cin >> question;
        // iddigit()으로 숫자인지 판별
        if (isdigit(question[0]) != 0) {
            // 숫자임 -> vector 활용
            int q = stoi(question);
            cout << v[q] << "\n";
        } else {
            // 문자임 -> map 활용
            if (pokemon.find(question) != pokemon.end()) {
                cout << pokemon[question] << "\n";
            }
        }
        // if index 번호라면 string으로 받아서 stoi로 풀기
        // 문제 번호 혹은 이름 찾아서 반환하는 로직 짜기
    }
    return 0;
}//
// Created by 최승우 on 26. 3. 19.
//
