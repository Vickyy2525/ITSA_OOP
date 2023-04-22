#include <iostream>
using namespace std;

int main (void){
  int num = 0, buf = 0, ans, del = 0, dell = 0, arr[6] = {0};

  cin >> num;
  cin >> del >> dell;  // Which two to want to delete?

  for(int i = 0; i < 5; i++) {   
    arr[0] = num / 10000; // 8xxxx
    buf = num % 10000;

    arr[1] = buf / 1000;  // x8xxx
    buf = buf % 1000;
    
    arr[2] = buf / 100;   // xx8xx
    buf = buf % 100;
    
    arr[3] = buf / 10;    // xxx8x
    buf = buf % 10;
    arr[4] = buf;         // xxxx8
  }

  switch (del) {  // delete
    case 1:
      arr[0] = 0;
      break;
    case 2:
      arr[1] = 0;
      break;
    case 3:
      arr[2] = 0;
      break;
    case 4:
      arr[3] = 0;
      break;
    case 5:
      arr[4] = 0;
      break;
    default:
      break;
  }

  switch (dell) {   // delete
    case 1:
      arr[0] = 0;
      break;
    case 2:
      arr[1] = 0;
      break;
    case 3:
      arr[2] = 0;
      break;
    case 4:
      arr[3] = 0;
      break;
    case 5:
      arr[4] = 0;
      break;
    default:
      break;
  }

  int temp = 0;
  for(int i = 0; i < 5; i++) {  // bubble sort each item(time from small to big)
    for(int j = 0; j < 5 - i - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        temp= arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp; 
      }
    }
  }

  ans = arr[2] * 100 + arr[3] * 10 + arr[4];  // calculate the answer
  cout << ans << endl;

  return 0;
}