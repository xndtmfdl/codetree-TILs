#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i%2==0) {
                cnt++;
                cout << cnt << " ";            
            }
            else {
                cnt+=2;
                cout << cnt<< " ";
            }
        }
        cout << "\n";
    }
    return 0;
}