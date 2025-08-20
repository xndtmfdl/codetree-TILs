#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    for(int j=1; j<=9; j++) {
        for(int i=b; i>=a; i--) {
            if(j%2==0) {
                cout << i << " * " << j << " = " << i*j << " ";
                if(i!=a) {
                    cout << "/ ";
                }
                else cout << "\n";
            }
            
        }
    }

    return 0;
}