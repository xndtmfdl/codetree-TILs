#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, sum=0, cnt=0;
    for(int i=0; i<10; i++) {
        cin >> a;
        if(a>=0 && a<=200) {
            sum+=a;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    double mean = (double)sum/cnt;
    cout << sum << " " << mean;
    return 0;
}