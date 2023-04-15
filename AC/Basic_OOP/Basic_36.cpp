#include <iostream>
using namespace std;

int main (void) {
  int num = 0;
  
  while (cin >> num) {
    if(num % (400) == 0) cout << "Bissextile Year\n"; // 400的倍數
    else if(num % (100) == 0 && num % (400) != 0) cout << "Common Year\n";  // 只是100的倍數
    else if(num % (4) == 0) cout << "Bissextile Year\n";  // 是4的倍數
    else if(num % (4) != 0) cout << "Common Year\n";  // 不是4的倍數
  }
  return 0;
}