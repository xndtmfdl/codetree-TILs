#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    if(a<b) {
        cout << (a<c);
    }
    else   
        cout << "0";
    cout << " " << (a==b & b==c);

    return 0;
}