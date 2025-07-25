#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    bool satis = true;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            satis = false;
            break;
        }
    }
    if(satis == true) cout << "P";
    else cout << "C";
    return 0;
}