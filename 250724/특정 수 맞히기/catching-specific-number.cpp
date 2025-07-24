#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    while(1) {
        cin >> a;
        if(a>25) {
            cout << "Lower" << "\n";
        }
        else if(a<25) {
            cout << "Higher" << "\n";
        }
        else {
            cout << "Good" << "\n";
            break;
        }
    }
    return 0;
}