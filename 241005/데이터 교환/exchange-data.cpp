#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;
    int temp = a;
    a = c;
    c = b;
    b = temp;
    cout << a << "\n" << b << "\n" << c;
    return 0;
}