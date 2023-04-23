#include <iostream>
#include <string>
using namespace std;

int main (void){
  string arr;
  int counts[150] = {0};

  cin >> arr;       // input
  int len = arr.length();  // the length of arr
  for (int i = 0; i < len; i++) {
    if(isalpha(arr[i])) {
      int buf = tolower(arr[i]);    // convert to lower case
      counts[buf-97]++;   // counter ++
    }
  }

  for (int i = 0; i < 26; i++) {  // output number of times and the character
    if(counts[i] != 0) cout << (char)(97+i) << " " << counts[i] << endl;
  }

  return 0;
}