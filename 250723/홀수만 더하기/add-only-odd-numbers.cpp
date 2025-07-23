#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int a, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        if(a%2!=0 && a%3==0) {
            cnt+=a;
        }
    }
    cout << cnt;
    return 0;
}