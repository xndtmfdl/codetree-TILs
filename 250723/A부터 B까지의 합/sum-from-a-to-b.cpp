#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, sum=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++) {
        sum+=i;
    }
    cout << sum;
    return 0;
}