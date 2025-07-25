#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt=0;
    cin >> n;
    while(1) {
        if(n==1) {
            cout << cnt;
            break;
        }
        if(n%2==0) {
            n/=2;
            cnt++;
        }
        else if(n%2!=0) {
            n = n*3+1;
            cnt++;
        }
    }
    return 0;
}