#include <iostream>

using namespace::std;

int A, B, C, hour, minute;

int main() {
    cin >> A >> B >> C;
    
    int min = 60 * A + B; // 시 -> 분으로 변형
    min += C;
    
    hour = (min / 60) % 24; // 시간으로 변형
    minute = min % 60; // 분으로 변형
    
    cout << hour << " " << minute;

    return 0;
}