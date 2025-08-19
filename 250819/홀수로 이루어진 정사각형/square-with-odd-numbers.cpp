#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=11; i<11+2*n; i+=2) {
        int cnt = i;
        for(int j=0; j<n; j++) {
            if(i%2!=0) {
                cout << cnt << " ";
                cnt+=2;
            }
        }
        cout << "\n";
    }
    return 0;
}