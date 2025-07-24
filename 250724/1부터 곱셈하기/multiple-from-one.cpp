#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int prod=1, temp;
    for(int i=1; i<=10; i++) {
        prod*=i;
        if(prod>=n) {
            temp=i;
            break;
        }
    }
    cout << temp;
    return 0;
}