#include <iostream>
#include <string.h> 
using namespace std;

int main (void) {
  char str[150]; 
  int count[150] = {0}, len;  

  cin >> str;
  len = strlen(str);    // find length

  for (int i = 0; i < len; i++) {
    count[str[i]]++;    // count 
  }

  for (int i = 127; i > 31; i--) {  // output from big to small
    if(count[i] != 0) {
      cout << i  << " " << count[i] << endl;
    }
  }

  return 0;
}