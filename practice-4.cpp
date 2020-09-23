/*
* Author : Muhammad Nurhaziq bin Mohd Zamani
* Find Minimum of 2 numbers
*/
#include <iostream>
using namespace std;

int findMinBetween2Num(int, int);
void loopInput(int);

int main () {
  cout << "Enter Num Of Loops: ";
  int loopNo;
  cin >> loopNo;
  loopInput(loopNo);
  return 0;
}

int findMinBetween2Num(int a, int b){
  if(a < b){
    return a;
  }else{
    return b;
  }
}

void loopInput(int loopNo){
  int a = 0; int b;
  for(int i = 0; i < loopNo; i++){
    cin >> a >> b;
    cout << findMinBetween2Num(a, b) << endl;
  }
}

