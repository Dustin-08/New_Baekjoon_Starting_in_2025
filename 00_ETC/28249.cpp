#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cctype>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 0;
    cin >> t;
    vector<string> s(t);
    for (int i = 0; i < t; ++i) {
        cin >> s[i];
    }
    int sum = 0;
    for (int i = 0; i < t; ++i) {
        if (s[i] == "Poblano") {
            sum += 1500;
        } else if (s[i] == "Mirasol") {
            sum += 6000;
        } else if (s[i] == "Serrano") {
            sum += 15500;
        } else if (s[i] == "Cayenne") {
            sum += 40000;
        } else if (s[i] == "Thai") {
            sum += 75000;
        } else if (s[i] == "Habanero") {
            sum += 125000;
        }
    }
    cout << sum << "\n";
    return 0;
}//
// Created by 최승우 on 26. 3. 23.
//
