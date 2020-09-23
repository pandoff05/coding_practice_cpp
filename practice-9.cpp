/*
* Author: Muhammad Nurhaziq bin Mohd Zamani
* Calculate a string of number (basic)
*/
#include <iostream>
using namespace std;

int calculate(int, int, int);

int main(){
  cout << "enter max loop: " <<endl;
  int loopMax;
  cin >> loopMax;
  for(int i = 0; i < loopMax; i ++ ) {
    int no1 = 0, no2 = 0, no3 = 0;
    cin >> no1 >> no2 >> no3;
    cout <<"\t"<< calculate(no1, no2, no3) << "\n";
  }
  return 0;
}

int calculate(int a, int b, int c){
  int init = a * b + c, total = 0;
  for(int i = 0; i < sizeof(init) ; i ++){
    total += init%10;
    init = init/10;
  }
  return total;
}