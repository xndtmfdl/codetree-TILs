#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<2*n-1; i++) {
        if(i<n) {
            for(int j=0; j<i+1; j++) {
                cout << "*";
            }
            cout << "\n";
        }
        else {
            for(int k=n; k>i-n+1; k--) {
                cout << "*";
            }
            cout << "\n";
        }
    cout << "\n";
    }
    return 0;
}