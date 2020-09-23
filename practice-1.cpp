#include <iostream>
using namespace std;
/*
* Author : Muhammad Nurhaziq bin Mohd Zamani
* Sum of A and B
*/
int total(int, int);

int main(){
  int no1 = 0, no2 = 0;
  cout << "Input Numbers: "<<endl;
  cin >> no1 >> no2;

  cout << "answer: " << "\n" << total(no1, no2) << endl;
  return 0;
}

int total(int no1, int no2){
  return no1 + no2;
}