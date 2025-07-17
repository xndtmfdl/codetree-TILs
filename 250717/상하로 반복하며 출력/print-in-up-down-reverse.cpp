#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n][n];
    int a=1;
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            for(int j=0; j<n; j++) {
                arr[j][i] = a;
                a++;
            }
        }
        else {
            for(int j=n-1; j>=0; j--) {
                arr[j][i] = a;
                a++;
            }
        }
        a=1;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}