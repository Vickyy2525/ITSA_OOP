#include <iostream>  
#include <iomanip>  
using namespace std;  
   
int main (){  
    int km;  
    cin >> km;  
    cout << setiosflags(ios::fixed) << setprecision(1) << (km*1.6) << endl;  
}  