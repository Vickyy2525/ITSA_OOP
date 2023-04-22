#include <iostream>
#include <string>
using namespace std;

int main (void){
  string arr[100];
  int num = 0, judge1 = 0, judge2 = 0;

  cin >> num;  // number of input
  for (int i = 0; i < num; i++) {
    cin >> arr[i] >> judge1 >> judge2;  // input
    if(judge1 == 1) {  
      if(judge2 == 3) cout << arr[i] <<" Staff\n";  // compare and print
      else if(judge2 == 4) cout << arr[i] << " General\n";  // compare and print
    }else if(judge1 == 2){
      if(judge2 == 3) cout << arr[i] << " execute by shooting\n";  // compare and print
      else if(judge2 == 4) cout << arr[i] << " Soldier\n";  // compare and print
    }
  }
  return 0;
}