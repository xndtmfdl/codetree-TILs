#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    bool satis=true;
    for(int i=0; i<5; i++) {
        cin >> a;
        if(a%3!=0) {
            satis=false;
            break;
        }
    }
    if(satis==true) cout << 1;
    else cout << 0;
    return 0;
}