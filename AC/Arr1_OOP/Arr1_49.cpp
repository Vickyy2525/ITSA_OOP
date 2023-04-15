#include <iostream>
#include <string> 
using namespace std;

int main (void) {
  int num = 0, Cnt = 0; 
  char c, arr[150];

  while ((c = cin.get()) != '\n') { // input
    arr[Cnt] = c;
    Cnt++;
  }

  cin >> num;    // How much to add 
  for (int i = 0; i < Cnt; i++) { // encryption
    if(isupper(arr[i])) {
      int buf = num % 26;
      arr[i] = ((int)arr[i]) + buf;
      if(90 < arr[i]) arr[i] -= 26;   // check
      cout << (char) arr[i];
    }else if(islower(arr[i])) {
      int buf = num % 26;
      buf = ((int)arr[i]) + buf;
      if(122 < buf) buf -= 26;        // check
      cout << (char) buf;
    }else if(isdigit(arr[i])) {
      int buf = num % 10;
      arr[i] = ((int)arr[i]) + buf;
      if(57 < arr[i]) arr[i] -= 10;   // check
      cout << (char) arr[i];
    }else {
      cout << arr[i];
    }
  }
  cout << endl;
}