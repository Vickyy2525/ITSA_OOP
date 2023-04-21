#include <iostream>
#include <string>
using namespace std;

int main (void){
  int c = 0, num = 0;
  int counts[26] = {0};

  cin >> num;
  for (int i = 0; i < num; ) {
    c = cin.get();
    if('a' <= c and c <= 'z') {  // is a character
      counts[c-97]++; // count
      i++;
    }
  }
  for (int i = 0; i < 26; i++) {
    if(counts[i] != 0) {  
      cout << (char)(97+i) << " " << counts[i] << endl; // output
    }
  }

  return 0;
}