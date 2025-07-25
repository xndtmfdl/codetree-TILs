#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    bool satis = false;
    for(int i=a; i<=b; i++) {
        if(i%c==0) {
            satis = true;
            break;
        }
    }
    if(satis==false) cout << "YES";
    else cout << "NO";
    return 0;
}