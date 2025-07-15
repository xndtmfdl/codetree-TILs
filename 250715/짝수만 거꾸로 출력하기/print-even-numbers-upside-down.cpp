#include <iostream>
using namespace std;

void printEvenReverse(int n) {
    if (n == 0) return;

    int x;
    cin >> x;
    printEvenReverse(n - 1);  // 먼저 다음 입력으로 재귀 들어감

    if (x % 2 == 0) {
        cout << x << " ";  // 재귀가 돌아올 때 출력하므로 역순
    }
}

int main() {
    int n;
    cin >> n;
    printEvenReverse(n);
    return 0;
}