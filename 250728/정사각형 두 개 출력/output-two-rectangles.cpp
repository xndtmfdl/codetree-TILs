#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int k=0; k<2; k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << "*";
            }
            cout << "\n";
        }
        cout << "\n";

    }
    return 0;
}