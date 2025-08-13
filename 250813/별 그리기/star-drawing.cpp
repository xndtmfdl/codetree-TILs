#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        for(int j=n-i-1; j>0; j--) {
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n; i>1; i--) {
        for(int j=0; j<n-i+1; j++) {
            cout << " ";
        }
        for(int j=2*i-3; j>0; j--) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
