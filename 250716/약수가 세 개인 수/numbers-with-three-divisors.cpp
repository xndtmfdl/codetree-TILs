#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int cnt=0, total=0;
    for(int i=st; i<=ed; i++) {
        for(int j=1; j<=i; j++) {
            if(i%j==0) {
                cnt++;
            }
        }
        if(cnt == 3) {
            total++;
        }
        cnt=0;
    }
    // Please write your code here.
    cout << total;
    return 0;
}
