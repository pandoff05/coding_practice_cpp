/*
* Author : Muhammad Nurhaziq bin Mohd Zamani
* Sum of integer between pair in loops
*/
#include <iostream>
using namespace std;

void numberOfPair(int);
int sum(int, int);

int main(){
  cout << "Enter Number to Loop : "<< endl;
  int loopNo;
  cin >> loopNo;
  numberOfPair(loopNo);
  return 0;
}

void numberOfPair(int loopNo){
  int total = 0, a = 0, b = 0;
  for(int i = 0; i < loopNo; i++) {
    cin >> a >> b;
    cout << sum(a,b) << endl;
  }
}

int sum(int a, int b){
  return a + b;
}