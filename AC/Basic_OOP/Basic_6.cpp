#include <iostream>
#include <iomanip>
using namespace std;

int main (void) {
  int num = 0;
  cin >> num;

  switch (num) {  // judge the output
    case 12: case 1: case 2:
      cout << "Winter" << endl; 
      break;
    case 3: case 4: case 5:
      cout << "Spring" << endl;
      break;
    case 6: case 7: case 8:
      cout << "Summer" << endl;
      break;
    case 9: case 10: case 11:
      cout << "Autumn" << endl;
      break;
    default:
      break;
  }

  return 0;
}