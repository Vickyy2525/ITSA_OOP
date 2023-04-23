#include <iostream>
#include <iomanip>
using namespace std;


int main (void){
  float min = 0, max = 0, buf = 0;

  cin >> min >> max;

  if(min > max){  // judge firstly
    buf = min;
    min = max;
    max = buf;
  }

  for(int i = 0; i < 8; i++){
    cin >> buf;
    if(buf > max){  // find max
      max = buf;
    }else if(buf < min){  // find min
      min = buf;
    }
  }
  
  cout << "maximum:" << fixed << setprecision(2) << max << endl;
  cout << "minimum:" << fixed << setprecision(2) << min << endl;

  return 0;
}