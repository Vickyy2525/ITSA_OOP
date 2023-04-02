#include <iostream>
#include <string.h> 
using namespace std;

int main (void) {
  char str[100] = {0}; 
  char cmp[100] = {0}; 
  int len = 0;  

  while((scanf("%s", str)) != EOF) {
    len = strlen(str);      // length of str
    for(int i = len-1; i >= 0; i--) cmp[i] = str[len - (i+1)];  // reverse the str
    
    int flag = 0, strCnt = 0;
    while(flag == 0) {
      if(str[strCnt] == cmp [strCnt]) strCnt++;
      else flag = 1;        // different
      if(strCnt == len-1) { // all the same
        cout << "YES" << endl;  // palindrome
        break;
      }
    }
    if(flag == 1) cout << "NO" << endl; // not palindrome
  }
}