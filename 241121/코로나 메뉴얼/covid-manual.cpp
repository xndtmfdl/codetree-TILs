#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char yon1, yon2, yon3;
    int temp1, temp2, temp3;
    int emergency =0;
    cin >> yon1 >> temp1 >> yon2 >> temp2 >> yon3 >> temp3;
    if(yon1=='Y' && temp1 >=37)
        emergency++;
    if(yon2=='Y' && temp2 >=37)
        emergency++;
    if(yon3=='Y' && temp3 >=37)
        emergency++;
    if(emergency>=2)
        cout << "E";
    else 
        cout << "n";
    return 0;
}