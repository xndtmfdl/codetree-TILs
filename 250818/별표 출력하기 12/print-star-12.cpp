#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1) {
                cout << "* ";
            }
            else {
                if(j%2==0 && i<=j) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}