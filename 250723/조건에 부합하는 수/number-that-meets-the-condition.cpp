#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;
    for(int i=1; i<=a; i++) {
        if(i%2==0 && i%4!=0) continue;
        int q2=i/8;
        if(q2%2==0) continue;
        if(i%7!=5 && i%7!=6 && i%7!=4) continue;
        cout << i << " ";
    }
    return 0;
}