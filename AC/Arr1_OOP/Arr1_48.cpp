#include <iostream>
#include <string> 
using namespace std;

int main (void) {
  string arr;
  int num, ans = 0, buf = 0;
  cin >> arr;

  char temp;
  temp = arr[3];  // swap first and third
  arr[3] = arr[1];
  arr[1] = temp;
  temp = arr[2];
  arr[2] = arr[0];
  arr[0] = temp;

  num = stoi(arr);  // to integer

  
  for(int i = 0; i < 4; i++) {
    buf = num % 10;
    num /= 10;
    buf = (buf + 7) % 10; // encryption
    for(int j = i; j > 0; j--) {
      buf *= 10; 
    }
    ans += buf;
  }

  char* answer;
  sprintf(answer, "%d", ans);
  if(answer[3] == '\0')cout << "0" << answer << endl;
  else cout << answer << endl;

  return 0;
}