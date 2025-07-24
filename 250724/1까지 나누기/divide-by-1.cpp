#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int temp=0;
    int div=0;
    int i=1;
    while(1) {
        div = n/i;
        i++;
        temp++;
        n=div;
        if(div<=1) break;
    }
    cout << temp;
    return 0;
}