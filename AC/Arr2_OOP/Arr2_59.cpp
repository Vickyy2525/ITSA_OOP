#include <iostream>
#include <string> 
using namespace std;

int main (void) {
  string arr;
  int num = 0;
  cin >> num;

  for(int i = 0; i < num; i++) {  
    int len = 0;
    cin >> arr;
    len = arr.size();  // length of arr
    if(len != 4) {  // length is not 4
      cout << "Failure Input" << endl;
      continue;
    }else {
      int flag = 0; // count the number and frequency of the same number 
      for(int i = 0; i < 4; i++) {
        for(int j = i; j < 4; j++) {
          if(arr[i] == arr[j] && i != j)flag++;
        } 
      }
      if(flag != 1) cout << "No" << endl; 
      else if(flag == 1) cout << "Yes" << endl; // good number
    }
  }

  return 0;
}