#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    if(a>=90 && b<=100) {
        if(b>=95)
            cout << "100000";
        else if(b>=90)
            cout << "50000";
        else
            cout << "0";
    }
    else    
        cout << "0";
    return 0;
}