#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt=0;
    cin >> n;
    while(1) {
        n/=2;
        cnt++;
        if(n==1) {
            cout << cnt;
            break;
        }
    }
    return 0;
}