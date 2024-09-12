#include <iostream>
#include <string>
using namespace std;

int main() {
    double a = 9.2;
    double b = 1.3;
    cout << fixed;
    cout.precision(1);
    cout << a << "ft = " << 30.48*a << "cm" << endl;
    cout << b << "mi = " << 160934*b << "cm";
    return 0;
}