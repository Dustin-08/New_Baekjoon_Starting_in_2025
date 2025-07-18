#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();

    vector<pair<string, string> > name(n);

    for (int i = 0; i < n; ++i) {
        string first, second;
        getline(cin, first);
        getline(cin, second);
        name[i] = {first, second};
    }

    for (int i = 0; i < n; ++i) {
        cout << "Case " << i + 1 << ": " << name[i].second << ", " << name[i].first << endl;
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
