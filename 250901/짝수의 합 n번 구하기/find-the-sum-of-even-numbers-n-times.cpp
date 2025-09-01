#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, n;
    cin >> n; 
    int temp=0;
    for(int j=0; j<n; j++) {
        cin >> a >> b;
        for(int i=a; i<=b; i++) {
            if(i%2==0)
                temp+=i;
        }
        cout << temp << "\n";
        temp=0;
    }
    return 0;
}