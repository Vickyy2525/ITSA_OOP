#include<iostream>
#include <cmath>
using namespace std;

int recursive(int num) {
    if( num == 0 ) return 1;
    if( num == 1 ) return 2;
    if( num > 1 ) return recursive(floor(num/2)) + recursive(num-1);
}

int main() {
    int num;
    while(cin >> num) {
        cout << recursive(num) << endl;
    }

    return 0;
}