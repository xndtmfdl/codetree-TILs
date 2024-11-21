#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b && b <c)
        cout << b;
    else if( b<c && c<a)
        cout << c;
    else 
        cout << a;
    return 0;
}