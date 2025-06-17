#include <iostream>
using namespace::std;

int n;
int tshirt[7];
int t, p;
int tshirt_count;
int pen_count;
int pen_count_remain;
int tmp;

// 23명
// 티셔츠 t 묶음씩 묶고 안되면 묶음 추가
// 펜: 7개씩 묶기 가능 -> 7x3=21 + 2개 = 23개

int main() {
    cin >> n;
    for (int i = 0; i < 6; ++i) {
        cin >> tshirt[i];
    }
    cin >> t >> p;

    for (int i = 0; i < 6; ++i) {
        if (tshirt[i] % t == 0) {
            tmp = tshirt[i] / t;
        } else {
            tmp = tshirt[i] / t + 1;
        }
        tshirt_count += tmp;
    }
    cout << tshirt_count << "\n";

    pen_count = n / p;
    pen_count_remain = n % p;
    cout << pen_count << " " << pen_count_remain;
    return 0;
}

//
// Created by 최승우 on 25. 6. 17.
//
