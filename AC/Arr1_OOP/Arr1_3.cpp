#include <iostream>
using namespace std;

int main (void) {
  int arr[10] = {0}, num = 0;
  for(int i = 0; i < 6; i++) {
    cin >> arr[i];
    num += arr[i]*arr[i]*arr[i];  // 加上立方和 
  }

  cout << num << endl;

  return 0;
}