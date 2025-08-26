#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a, b;
    cin >> n;
    int temp=1;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        for(int j=a; j<=b; j++) {
            temp*=j;
        }
        cout << temp << "\n";
        temp=1;
    }
    return 0;
}