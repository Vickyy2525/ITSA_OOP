#include <iostream>
#include <iomanip>
using namespace std;

int main (void){
  int month = 0, day = 0;

  cin >> month >> day;

  switch(month){
    case 1:
      if(day <= 20) cout << "Capricorn\n";
      else cout << "Aquarius\n";
      break;
    case 2:
      if(day <= 18) cout << "Aquarius\n";
      else cout << "Pisces\n";
      break;
    case 3:
      if(day <= 20) cout << "Pisces\n";
      else cout << "Aries\n";
      break;
    case 4:
      if(day <= 20) cout << "Aries\n";
      else cout << "Taurus\n";
      break;
    case 5:
      if(day <= 21) cout << "Taurus\n";
      else cout << "Gemini\n";
      break;
    case 6:
      if(day <= 22) cout << "Gemini\n";
      else cout << "Cancer\n";
      break;
    case 7:
      if(day <= 23) cout << "Cancer\n";
      else cout << "Leo\n";
      break;
    case 8:
      if(day <= 23) cout << "Leo\n";
      else cout << "Virgo\n";
      break;
    case 9:
      if(day <= 23) cout << "Virgo\n";
      else cout << "Libra\n";
      break;
    case 10:
      if(day <= 23) cout << "Libra\n";
      else cout << "Scorpio\n";
      break;
    case 11:
      if(day <= 22) cout << "Scorpio\n";
      else cout << "Sagittarius\n";
      break;
    case 12:
      if(day <= 22) cout << "Sagittarius\n";
      else cout << "Capricorn\n";
      break;
    default:
      break;
  }

  return 0;
}