#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> FBI;
    for (int i = 0; i < 5; ++i) {
        string s;
        cin >> s;
        if (s.find("FBI") != string::npos) {
            FBI.push_back(i + 1);
        }
    }
    if (FBI.empty()) {
        cout << "HE GOT AWAY!";
    } else {
        for (int num: FBI) {
            cout << num << " ";
        }
    }
    return 0;
}
//
// Created by 최승우 on 25. 8. 7.
//
