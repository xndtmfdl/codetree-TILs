#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int classroom=0, hall=0, toilet=0; 
    cin >> n;
    int day=0;
    for(int i=0; i<n; i++) {
        day++;
        if(day%12==0) {
            toilet++;
        }
        else if(day%3==0) {
            hall++;
        }
        else if(day%2==0) {
            classroom++;
        }
    }
    cout << classroom << " " << hall << " " << toilet;
    return 0;
}