#include <iostream>
using namespace std;

int main (void){
  int a = 0, b = 0, c = 0;
  int d = 0, e = 0, f = 0;
  int g = 0, h = 0, i = 0;
  int sum = 0;


  cin >> a >> b >> c;
  cin >> d >> e >> f;
  cin >> g >> h >> i;

  sum = a * e * i + d * h * c + g * b * f - c * e * g - b * d * i - a * f * h;  // calculate
  
  cout << sum << endl;

  return 0;
}