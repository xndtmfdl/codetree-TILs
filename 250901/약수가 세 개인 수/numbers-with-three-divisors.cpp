#include <iostream>

using namespace std;

int st, ed;

int main() {
    int a, b;
    cin >> a >> b;
    int temp=0, cnt=0;
    for(int i=a; i<=b; i++) {
        for(int j=1; j<=i; j++) {
            if(i%j==0) {
                cnt++;
            }
        }
        if(cnt==3) {
            temp++;
        }
        cnt=0;
    }
    cout << temp;
}
