// 체육은 코딩 과목 입니다
#include <iostream>
using namespace::std;

int arr[11];
int angle = 0;

int main() {
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
        if (arr[i] == 1) {
            angle = (angle + 1) % 4;
        } else if (arr[i] == 2) {
            angle = (angle + 2) % 4;
        } else if (arr[i] == 3) {
            angle = (angle + 3) % 4;
        }
    }
    if (angle == 0) {
        cout << "N";
    } else if (angle == 3) {
        cout << "W";
    } else if (angle == 2) {
        cout << "S";
    } else if (angle == 1) {
        cout << "E";
    }
    return 0;
}
