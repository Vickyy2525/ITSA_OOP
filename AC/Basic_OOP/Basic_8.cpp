#include <iostream>
using namespace std;

int main (void) {
  int num = 0, flag = 0;

  scanf("%d", &num);
  for(int i = 2; i < num; i++) {
    if(num % i == 0) {  // can divide
      flag = 1;
      break;
    }
  }

  if(flag == 0){  // prime
    cout << "YES" << endl;    
  }else if(flag == 1){  // not a prime number
    cout << "NO" << endl;
  }
  return 0;
}