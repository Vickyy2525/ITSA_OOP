#include <iostream>
using namespace std;

int main (void){
  int arr[3][3] = {0}, flag = 0; // flag 看是不是

  for(int i = 0; i < 3; i++) {  // input
    for(int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  // 斜的方向
  if((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])||(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])){
    flag = 1;
    cout << "True\n";
  }else{
    for(int i = 0; i < 3; i++) {
      // 直的 橫的 方向
      if((arr[0][i] == arr[1][i] && arr[1][i]== arr[2][i])||(arr[i][2] == arr[i][1] && arr[i][1] == arr[i][0])){
        flag = 1;
        cout << "True\n";
      }
    }
  }
  if(flag == 0)cout << "False\n";
  return 0;
}