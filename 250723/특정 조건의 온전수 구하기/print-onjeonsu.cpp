#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt=0;
    for(int i=1; i<=n; i++) {
        if(i%2==0) continue;
        if(i%10==5) continue;
        if(i%3==0 && i%9!=0) continue;
        cout << i << " ";
    }
    return 0;
}