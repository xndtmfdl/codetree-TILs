#include <iostream>
#include <string>

using namespace std;

int main() {
    double a, b;
    char c;
    cin >> c >> a >> b;
    cout << fixed;
    cout.precision(2);
    cout << c << "\n" << a << "\n" << b;
}