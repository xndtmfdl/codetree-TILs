#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0;
    int arr[4][4];
    for(int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
            if(arr[i][j]%5==0) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}