#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int arr[10] = {a , b};
    for(int i=0; i<10; i++) {
        if(i>1) {
            arr[i] = (arr[i-1] + arr[i-2])%10;
            cout << arr[i] << " ";
        }
        else cout << arr[i] << " ";
    }
    return 0;
}