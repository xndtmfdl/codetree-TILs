#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int a = 65;
    cin >> n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            cout << "  ";
        }
        for(int j=i; j<n; j++) {
            if(a>90) {
                a=65;
            }
            cout << (char)a<< " ";
            a++;
        }
        cout << "\n";

    }
    return 0;
}