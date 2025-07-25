#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0;
    int cnt=0;
    int a;
    cout << fixed;
    cout.precision(2);
    while(1) {
        cin >> a;
        if(a >=30 || a<=19) {
            cout << (double)sum/cnt;
            break;
        }
        sum+=a;
        cnt++;

    }
    return 0;
}