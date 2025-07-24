#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, temp=0;
    while(1) {
        cin >> a;
        if(a%2!=0) continue;
        else if(a%2==0) {
            cout << a/2 << "\n";
            temp++;
        }
        if(temp==3) break;
    }
    return 0;
}