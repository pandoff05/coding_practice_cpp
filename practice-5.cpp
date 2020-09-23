/*
* Author : Muhammad Nurhaziq bin Mohd Zamani
* Find Minimum of 3 numbers
*/
#include <iostream>
using namespace std;

int findMin(int, int, int);
void loopInput(int);

int main () {
  cout << "Enter Num Of Loops: ";
  int loopNo;
  cin >> loopNo;
  loopInput(loopNo);
  return 0;
}

int findMin(int a, int b, int c){
  if(a < b && a < c){
    return a;
  }else if (b < c && b < a){
    return b;
  }else {
    return c;
  }
}

void loopInput(int loopNo){
  int a = 0, b = 0, c = 0;
  for(int i = 0; i < loopNo; i++){
    cin >> a >> b >> c;
    cout << findMin(a, b, c) << endl;
  }
}

