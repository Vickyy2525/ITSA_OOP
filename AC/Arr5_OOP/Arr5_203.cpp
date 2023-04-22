#include <iostream>
using namespace std;

int main (void){
  int num = 0;
  cin >> num;  // number of input

  for(int i = 0; i < num; i++) {  
    int planet = 0;
    cin >> planet; // which planet?
    switch (planet) {
      case 1:
        cout << "1 Mercury\n";
        break;
      case 2:
        cout << "2 Venus\n";
        break;
      case 3:
        cout << "3 Earth\n";
        break;
      case 4:
        cout << "4 Mars\n";
        break;
      case 5:
        cout << "5 Juputer\n";
        break;
      case 6:
        cout << "6 Saturn\n";
        break;
      case 7:
        cout << "7 Uranus\n";
        break;
      case 8:
        cout << "8 Neptunus\n";
        break;
      case 9:
        cout << "9 Pluto\n";
        break;
      default:
        break;
    }
  }

  return 0;
}