#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt=0;
    for(int i=1; i<=n; i++) {
        for(int j=2; j<=i; j++) {
            if(i%j==0) cnt++;
        }
        if(cnt==1) cout << i << " ";
        cnt=0;
    }
    return 0;
}