#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int sum=0, a;
    for(int i=1; i<=100; i++) {
        sum+=i;
        if(sum>=n) {
            a=i;
            break;
        }
    }
    cout << a;
    return 0;
}