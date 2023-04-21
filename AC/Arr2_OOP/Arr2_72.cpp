#include<iostream>
using namespace std;

int main() {
    int num, full, half, dollar;
    cin >> num;     // # of for loop
    for(int i = 0; i < num; i++){
        cin >> full >> half;   // #adult #child
        dollar = full * 250 + half * 175;  // compute
        cout << dollar << endl;   // output total dollar 
    }

    return 0;
}