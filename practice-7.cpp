#include <iostream>
#include <math.h>
using namespace std;

int divNums(int, int);

int main(){
  int num1 = 0, num2 = 0, loopMax = 0;
  cout << "Enter Calculation Loop: " << endl;
  cin >> loopMax;
  // cout << "Enter Data: " << endl;
  for(int i = 0; i < loopMax; i++){
    cin >> num1 >> num2;
    cout << divNums(num1, num2)<<"\t";
  }
  return 0;
}

int divNums(int no1, int no2){
  return round(double(no1)/double(no2));
}