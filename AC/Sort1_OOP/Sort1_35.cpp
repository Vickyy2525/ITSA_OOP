#include <iostream>
using namespace std;

int main (void){
  int arr[10] = {1, 6, 9, 23, 56, 95, 0};
  cin >> arr[6];

  int temp = 0;
  for(int i = 0; i < 7; i++) {  // bubble sort each item(time from small to big)
    for(int j = 0; j < 7 - i - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        temp= arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp; 
      }
    }
  }

  for(int i = 0; i < 6; i++) {
    cout << arr[i] << ",";
  }

  cout << arr[6] << endl;

  return 0;
}