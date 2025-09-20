#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(50);
    for (int i = 0; i < 50; ++i) {
        cin >> v[i];
    }
    int n;
    cin >> n;
    int rank = 0;
    for (int i = 0; i < 50; ++i) {
        if (v[i] == n) {
            rank = i + 1;
            break;
        }
    }
    if (1 <= rank && rank <= 5) {
        cout << "A+";
    } else if (6 <= rank && rank <= 15) {
        cout << "A0";
    } else if (16 <= rank && rank <= 30) {
        cout << "B+";
    } else if (31 <= rank && rank <= 35) {
        cout << "B0";
    } else if (36 <= rank && rank <= 45) {
        cout << "C+";
    } else if (46 <= rank && rank <= 48) {
        cout << "C0";
    } else if (49 <= rank && rank <= 50) {
        cout << "F";
    }
    return 0;
}
//
// Created by 최승우 on 25. 9. 16.
//
