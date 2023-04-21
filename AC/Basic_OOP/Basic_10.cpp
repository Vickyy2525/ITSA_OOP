#include <iostream>  
using namespace std;  
  
int main (void) {  
  int a = 0, b = 0, buf = 0;  
  cin >> a >> b;  
  if(a < b) {  
    int tmp = a;  
    a = b;  
    b = tmp;  
  }  
  while(a % b != 0 && a != 1){  
    a %= b;  
    int tmp = a;  
    a = b;  
    b = tmp;  
  }  
  cout << b << endl;  
}