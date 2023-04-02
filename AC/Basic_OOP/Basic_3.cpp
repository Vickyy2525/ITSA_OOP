#include <iostream>
using namespace std;

int main (void) {
  int x = 0, y = 0;
  cin >> x >> y; //coordinate

  if (x * x + y * y > 10000) cout << "outside" << endl; // not in the range
  else cout << "inside" << endl; // in the range

    return 0;
}