#include <iostream>
#include <string>
using namespace std;

int main (void) {
  string str; 
  string cmp; 
  int len = 0;  

  while(cin >> str) {
    len = str.size();      // length of str
    for(int i = len-1; i >= 0; i--) cmp[i] = str[len - (i+1)];  // reverse the str
    
    int flag = 0, strCnt = 0;
    while(flag == 0) {
      if(str[strCnt] == cmp [strCnt]) strCnt++;
      else flag = 1;        // different
      if(strCnt == len-1) { // all the same
        cout << "YES\n";  // palindrome
        break;
      }
    }
    if(flag == 1) cout << "NO\n"; // not palindrome
  }

  return 0;
}