#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int e1, m1, e2, m2;
    cin >> m1 >> e1 >> m2 >> e2;
    if(m1==m2) {
        if(e1 > e2)
            cout << 'A';
        else 
            cout << 'B';
    }
    else {
        if(m1>m2)
            cout << 'A';
        else 
            cout << 'B';
    }
    return 0;
}