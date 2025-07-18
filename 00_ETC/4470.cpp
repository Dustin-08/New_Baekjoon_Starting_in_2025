#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();

    vector<string> str(n);

    for (int i = 0; i < n; ++i) {
        getline(cin, str[i]);
    }

    for (int i = 0; i < n; ++i) {
        int idx = i + 1;
        cout << idx << ". " << str[i] << endl;
    }

    return 0;
}
//
// Created by 최승우 on 25. 7. 18.
//
