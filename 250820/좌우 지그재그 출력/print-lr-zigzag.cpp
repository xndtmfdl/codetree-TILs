#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt=1;
    for(int i=1; i<=n; i++) {
        if(i%2!=0) {
            for(int j=1; j<=n; j++) {
                cout << cnt << " ";
                cnt++;
            }
        }
        else {
            for(int j=n*i; j>n*(i-1); j--) {
                cout << j << " ";
                cnt++;
            }
        }
        cout << "\n";
    }
    return 0;
}