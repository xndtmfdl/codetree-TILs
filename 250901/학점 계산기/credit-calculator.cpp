#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    double sum=0;
    cin >> n;
    double arr[n];
    cout << fixed;
    cout.precision(1);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    double mean = sum/n;
    cout << mean << "\n";
    if(mean>=4.0) cout << "Perfect";
    else if(mean>=3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}