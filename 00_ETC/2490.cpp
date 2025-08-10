#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; ++i) {
        vector<int> v(4);
        for (int j = 0; j < 4; ++j) {
            cin >> v[j];
        }
        int cnt0 = 0, cnt1 = 0;
        for (int j = 0; j < 4; ++j) {
            if (v[j] == 0) {
                ++cnt0;
            } else if (v[j] == 1) {
                ++cnt1;
            }
        }

        if (cnt0 == 1 && cnt1 == 3) {
            cout << "A" << endl;
        } else if (cnt0 == 2 && cnt1 == 2) {
            cout << "B" << endl;
        } else if (cnt0 == 3 && cnt1 == 1) {
            cout << "C" << endl;
        } else if (cnt0 == 4) {
            cout << "D" << endl;
        } else if (cnt1 == 4) {
            cout << "E" << endl;
        }
    }
    return 0;
}

//
// Created by 최승우 on 25. 8. 10.
//
