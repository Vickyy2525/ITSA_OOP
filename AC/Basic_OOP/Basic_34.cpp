#include <iostream>
#include <iomanip>
using namespace std;

int main (void){
  int height = 0, gender = 0; // height and gender for input
  double weight = 0;  // weight for output
  
  while (cin >> height >> gender) {
      if(gender == 1) {
        weight = (height - 80) * 0.7; // male
        cout << fixed << setprecision(1) << weight << endl; // male ideal weight
      }else if(gender == 2) {     // female
        weight = (height - 70) * 0.6;
        cout << fixed << setprecision(1) << weight << endl; // female ideal weight
      }
  }
  return 0;
}