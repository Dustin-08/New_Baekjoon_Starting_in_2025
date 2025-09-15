#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    bool isAnj = false;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "anj") {
            isAnj = true;
        }
    }
    if (isAnj == true) {
        cout << "뭐야;";
    } else {
        cout << "뭐야?";
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 13.
//
