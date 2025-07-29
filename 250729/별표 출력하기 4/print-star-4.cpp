#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin >> n;
    for(int i=0; i<(2*n-1); i++) {
        if(i<n) {
            for(int j=n-i; j>0; j--) {
                cout << "* ";
            }
        }
        else {
            for(int k=0; k<i-n+2; k++) {
                cout << "* ";
            }
        }
        cout << "\n";
    }
}