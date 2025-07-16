#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, n;
    cin >> n;
    int sum=0;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        for (int j=a; j<=b; j++) {
            if(j%2==0) {
                sum += j;
            }
        }
        cout << sum << "\n";
        sum = 0;
    }
    
    return 0;
}