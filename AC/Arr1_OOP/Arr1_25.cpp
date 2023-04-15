#include <iostream>
#include <string> 
using namespace std;

int main (void) {
  string str; 
  int count[150] = {0}, len;  

  cin >> str;
  len = str.size();    // find length

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