/*
* Author: Muhammad Nurhaziq bin Mohd Zamani
* Description: Calculate arithmetic progression
*/

#include <iostream>
using namespace std;

int calc(int, int, int);
int recur(int, int , int);

int main(){
  cout << "Data: " <<endl;
  int maxLoop;
  cin >> maxLoop;
  for(int i = 0; i < maxLoop; i++) {
    int a = 0, b = 0, n = 0;
    cin >> a >> b >> n;
    cout << calc(a, n, b) << "\n";
  }
  return 0;
}

int calc(int a, int n, int b){
  int total = 0;
  for(int i = 0; i < n; i++) {
    total += recur(a, i, b);
  }
  return total;
}

int recur (int a, int n, int b){
  return a + (b*n);
}