#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if(a==2)
        cout << "28";
    else if(a<=7) { 
        if(a%2!=0) {
            cout << "31";
        }
        else {
            cout << "30";
        }
    }
    else {
        if(a%2==0)
            cout << "31";
        else 
            cout << "30";
    }
    return 0;
}