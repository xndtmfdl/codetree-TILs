#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0;
    int cnt=0;
    cout << fixed;
    cout.precision(1);
    for(int i=0; i<10; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<10; i++) {
        if(arr[i]>=250) break;
        sum+=arr[i];
        cnt++;
    }
    double mean = (double)sum/cnt;
    cout << sum << " " << mean;
    return 0;
}