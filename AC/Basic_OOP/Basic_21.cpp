#include <iostream>  
#include <iomanip>  
using namespace std;  
   
int main (){  
  float max = 0, min = 0, buf1 = 0, buf2 = 0; // initial  
  cin >> max >> min;  
  if (max < min) {  
    float temp = min;  
    min = max;  
    max = temp;  
  }  
  for(int i = 0; i < 4; i++) {  
    cin >> buf1 >> buf2; // remain input  
    if (buf1 < buf2) {  
      float temp = buf2;  
      buf2 = buf1;  
      buf1 = temp;  
    }  
    if (buf1 > max) max = buf1;     // replace  
    if (buf2 < min) min = buf2;     // replace  
  }  
  cout << setiosflags(ios::fixed) << setprecision(2) << "maximum:" << max<< "\nminimum:"<< min << endl;  
  // transform and required output  
}