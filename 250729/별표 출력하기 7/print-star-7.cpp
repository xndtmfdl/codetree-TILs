#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}