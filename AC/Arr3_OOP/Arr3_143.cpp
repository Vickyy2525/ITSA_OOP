#include <iostream>
#include <string>
using namespace std;

int main (void){
  char c = 0;

  while (cin.get(c)) {
    if(isalpha(c)) cout << "("<< (int)(c-97) << ")"; // output char and ASCII code
  }
  cout << endl;

  return 0;
}