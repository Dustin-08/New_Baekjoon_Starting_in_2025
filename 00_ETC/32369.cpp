// 양파 실험
#include <iostream>

using namespace::std;

// N=일 수, A=칭찬시 A만큼 자람, B=비난시 B만큼 자람
int N, A, B;
int goodOnionLength = 1;
int badOnionLength = 1;
int temp;

int main() {
    cin >> N >> A >> B;
    for (int i = 0; i < N; ++i) {
        goodOnionLength = goodOnionLength + A;
        badOnionLength = badOnionLength + B;
        if (goodOnionLength > badOnionLength) {
        } else if (goodOnionLength < badOnionLength) {
            temp = goodOnionLength;
            goodOnionLength = badOnionLength;
            badOnionLength = temp;
        } else if (badOnionLength == goodOnionLength) {
            badOnionLength = badOnionLength - 1;
        }
    }
    cout << goodOnionLength << " " << badOnionLength;
    return 0;
}
