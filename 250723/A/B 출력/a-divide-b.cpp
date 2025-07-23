#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout.precision(1);
    cout << fixed;
    cout << a/b << ".";
    int cnt = (a%b)*10;
    for(int i=0; i<20; i++) {
        cout << cnt/b;
        cnt = (cnt%b)*10;
    }


    return 0;
}