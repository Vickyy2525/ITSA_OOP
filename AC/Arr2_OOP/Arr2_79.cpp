#include <iostream>
#include <iomanip>
using namespace std;

int main (void){
  int num = 0;
  double ans = 0;

  cin >> num;
  while (num != -1) {
    ans = (int)((num * num * num)*10) / 30.00;  // (1/3)
    cout << fixed << setprecision(1) << ans << endl;
    cin >> num;
  }

  return 0;
}