#include <iostream>

using namespace std;

int st, ed;

int main() {
    int a, b;
    cin >> a >> b;
    int temp=0, cnt=0;
    for(int i=a; i<=b; i++) {
        for(int j=1; j<i; j++) {
            if(i%j==0) {
                temp+=j;
            }
        }
        if(temp==i) {
            cnt++;
        }
        temp=0;
    }
    cout << cnt;
    return 0;
}
