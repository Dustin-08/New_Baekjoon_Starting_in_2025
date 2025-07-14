// 초반엔 단순히 aaa, bbb,... 등만을 판별 및 카운팅 하여 구했지만
// 주어진 입력 이름 외에도 더 나올 수 있음
// map을 통해 처리할 것
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();

    vector<string> names;
    map<string, int> popularity;

    string line;
    getline(cin, line);
    stringstream ss(line);
    string name;
    while (ss >> name) {
        names.push_back(name);
        popularity[name] = 0;
    }

    for (int i = 0; i < n; ++i) {
        getline(cin, line);
        stringstream sss(line);
        while (sss >> name) {
            ++popularity[name];
        }
    }

    vector<pair<string, int> > result;
    for (const auto &p: popularity) {
        result.push_back(p);
    }
    sort(result.begin(), result.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    for (const auto &p: result) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 15.
//
