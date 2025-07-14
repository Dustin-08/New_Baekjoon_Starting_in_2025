#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    if (str == "NLCS") {
        cout << "North London Collegiate School";
    } else if (str == "BHA") {
        cout << "Branksome Hall Asia";
    } else if (str == "KIS") {
        cout << "Korea International School";
    } else if (str == "SJA") {
        cout << "St. Johnsbury Academy";
    }
    return 0;
}
//
// Created by 최승우 on 25. 7. 14.
//
