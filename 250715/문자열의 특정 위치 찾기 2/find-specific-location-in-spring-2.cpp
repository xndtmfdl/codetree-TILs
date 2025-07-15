#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    cin >> a;
    int cnt=0;
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    for(int i=0; i<5; i++) {
        if(arr[i].at(2) == a || arr[i].at(3) == a) {
            cout << arr[i] << "\n";
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}