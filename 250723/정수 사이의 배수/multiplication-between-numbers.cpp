#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int sum=0, cnt=0;
    float mean=0;
    cout << fixed;
    cout.precision(1);
    for(int i=a; i<=b; i++) {
        if(i%5==0 || i%7==0) {
            sum+=i;
            cnt++;
        }
    }
    mean = (round(sum*10))/cnt/10;
    cout << sum << " " << mean;
    return 0;
}