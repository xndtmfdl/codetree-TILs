#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, sum=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++) {
        if(i%2==0) {
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}