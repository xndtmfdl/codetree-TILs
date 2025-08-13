#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=n; i>0; i--) {
        for(int k=0; k<n-i; k++) {
            cout << "  ";
        }
        for(int j=i*2-1; j>0; j--) {
            cout << "* ";
        }
        cout << "\n";
    }
    for(int i=1; i<=n-1; i++) {
        for(int j=n-i-1; j>0; j--) {
            cout << "  ";
        }
        for(int k=0; k<2*i+1; k++) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}