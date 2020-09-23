/*
* Author : Muhammad Nurhaziq bin Mohd Zamani
* Enter how many number to enter and then add all numbers
*/
#include <iostream>
using namespace std;

int sum(int, int);
int loopToSum(int);


int main(){
  int no_of_loop;
  cout << "Input how many loops: ";
  cin >> no_of_loop;
  cout << "Input Number(s): " << endl;
  cout << loopToSum(no_of_loop) << endl;
  return 0;
}

int loopToSum(int no_of_loop){
  int total = 0;
  int no1 = 0;
  for(int i = 0; i < no_of_loop; i++){
    cin >> no1;
    total = sum(total, no1);
    // cout << total << endl;
  }
  return total;
}

int sum(int total, int no){
  total = total + no;
  return total;
}