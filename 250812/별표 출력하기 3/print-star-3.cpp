#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i=n; i>0; i--) {
        for(int k=0; k<n-i; k++) {
            cout << "  ";
        }
        for(int j=2*i-1; j>0; j--) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}