#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        if(i%2==0 || i%3==0) {
            cout << 1 << " ";
        }
        else cout << 0 << " ";
    }
    return 0;
}