#include <iostream>
#include <string.h> 
using namespace std;

int main (void) {
  int num = 0;

  cin >> num;  // number of the students
  int student[num];
  for (int i = 0; i < num; i++) { // input
    cin >> student[i];
  }

  int temp = 0;
  for(int i = 0; i < num; i++) {  // bubble sort 
    for(int j = 0; j < num - i - 1; j++) {
      if(student[j] > student[j+1]) {
        temp = student[j];          // swap
        student[j] = student[j+1];
        student[j+1] = temp; 
      }
    }
  }

  for (int i = 0; i < num; i++) { // output
    cout << student[i] << endl;
  }
  

  return 0;
}