#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=n; i>0; i--) {
        for(int j=i; j>0; j--) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}