#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i=0;
    while(1) {
        cin >> i;
        if(i>25) cout << "Lower" << "\n";
        else if(i<25) cout << "Higher" << "\n";
        else {
            cout << "Good" << "\n";
            break;
        }
    }
    return 0;
}