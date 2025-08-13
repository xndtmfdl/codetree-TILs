#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=n; i>0; i--) {
        for(int j=i; j>0; j--) {
            cout << "*";
        }
        for(int k=n-i; k>0; k--) {
            cout << " ";
        }
        for(int a=n-i; a>0; a--) {
            cout << " ";
        }
        for(int b=i; b>0; b--) {
            cout << "*";
        }
        cout << "\n";

    }
    return 0;
}