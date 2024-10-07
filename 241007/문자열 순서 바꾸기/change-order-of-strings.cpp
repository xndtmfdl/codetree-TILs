#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string temp = a;
    a = b;
    b = temp;
    cout << a << '\n' << b;
}