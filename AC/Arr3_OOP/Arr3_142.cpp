#include <iostream>
using namespace std;

int main (void){
  int M = 0, N = 0, sum = 0;

  cin >> M >> N; // input M and N

  for(int i = 1; i <= M; i++){
    if((i * i) % N == 0){ // summation
      sum = sum + i * i;
    }
  }
  
  cout << sum << endl;  // output

  return 0;
}