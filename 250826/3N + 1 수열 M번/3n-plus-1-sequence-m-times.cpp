#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> m;
    int cnt=0;
    for(int i=0; i<m; i++) {
        cin >> n;
        while(1) {
            if(n==1) break;
            if(n%2==0) {
                n/=2;
                cnt++;
            }
            else {
                n=n*3+1;
                cnt++;
            }
        }
        cout << cnt << "\n";
        cnt=0;
    }
    return 0;
}