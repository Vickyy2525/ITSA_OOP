#include <iostream>
using namespace std;

int main (void) {
  int num = 0, sum = 0;

  scanf("%d", &num);
  for(int i = 1; i <= num; i++) {
    if(i % 3 == 0){ // 3.6.9.12....
      sum += i;     // calculate the summary
    }
  }
  cout << sum << endl;
  return 0;
}