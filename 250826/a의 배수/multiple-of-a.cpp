#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a;
    cin >> n >> a;
    int cnt =1;
    while(cnt<=n)  {
        if(cnt%a==0) {
            cout << 1 << "\n";
        }
        else cout << 0 << "\n";
        cnt++;
    }
    return 0;
}