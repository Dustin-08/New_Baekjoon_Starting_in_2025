#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <vector>
#include <cctype>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int w, h;
    cin >> w >> h;

    float total = 0;
    total = w * h * 0.5;
    cout << fixed << setprecision(1);
    cout << total << endl;
    return 0;
}//
// Created by 최승우 on 26. 3. 26.
//
