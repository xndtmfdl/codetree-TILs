#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a, sum=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        sum+=a;
    }
    cout << fixed;
    cout.precision(1);
    double mean = (double)sum/n;
    cout << sum << " " << mean;
    return 0;
}