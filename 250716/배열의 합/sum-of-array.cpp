#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4];
    int total;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            cin >> arr[i][j];
            total+= arr[i][j];
        }
        cout << total << "\n";
        total=0;
    }
    return 0;
}