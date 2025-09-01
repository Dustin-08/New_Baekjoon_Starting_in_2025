#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    string str;
    cin >> n;
    cin >> str;

    int res = 0, cntE = 0, cntS = 0, cntW = 0, cntN = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] == 'E') {
            ++cntE;
        } else if (str[i] == 'S') {
            ++cntS;
        } else if (str[i] == 'W') {
            ++cntW;
        } else if (str[i] == 'N') {
            ++cntN;
        }
    }
    res = abs(cntE - cntW) + abs(cntS - cntN);
    cout << res << endl;
    return 0;
}
