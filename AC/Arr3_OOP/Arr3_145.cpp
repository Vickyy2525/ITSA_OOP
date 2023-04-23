#include <iostream>
#include <iomanip>
using namespace std;

int main (void){
  double buf = 0;
  int arr[100] = {0};  

  for(int i = 0; i < 10; i++) {   
    cin >> arr[i];     // input
  }

  int temp = 0;
  for(int i = 0; i < 10; i++) {  
    for(int j = 0; j < 10 - i - 1; j++) {
      if(arr[j] > arr[j + 1]) { // bubble sort
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      } 
    }
  }

  buf = (int)((arr[4] + arr[5]) * 10) / 20.00;  // median

  for(int i = 0; i < 10 - 1; i++) { // output ordered numbers
    cout << arr[i] << " ";
  }
  cout << arr[9] << endl;
  cout << "Median:" << setprecision(2) << fixed << buf << endl;

  return 0;
}