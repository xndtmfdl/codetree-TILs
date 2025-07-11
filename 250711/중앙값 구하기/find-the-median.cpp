#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b,c;
    cin >> a >> b >> c;
    if (a > b && a > c) {
        if(b>c) cout << b;
        else if ( b<c) cout << c;
    }
    else if(b > a && b > c) {
        if(a > c) cout << a;
        else if ( a < c) cout << c;
    }
    else if (c > a && c > b) {
        if ( a > b) cout << a;
        else if (a < b) cout << b;
    }
    return 0;
}