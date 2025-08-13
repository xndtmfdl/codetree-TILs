#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1; i<=2*n; i++) {
        if(i%2!=0) {
            for(int j=n-i/2; j>0; j--) {
                cout << "* ";
            }
            cout << "\n";
        }
        else {
            for(int j=0; j<i/2; j++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }
    return 0;
}