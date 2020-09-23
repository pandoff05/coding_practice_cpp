/*
* Author: Muhammad Nurhaziq bin Mohd Zamani
* Calculate number of vowel
*/
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int calcVowel(string);

int main(){
  cout<<"Enter how many string to enter : ";
  int loopMax;
  cin >> loopMax;
  string str = "";
  cin.ignore();
  for(int i = 0; i < loopMax; i++){
    getline (cin, str);
    cout << str <<"\t"<< calcVowel(str) << "\n";
    str = "";
  }
  return 0;
}

int calcVowel(string str){
  int counter = 0, loopcounter = 0;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i'){
      // cout << str[i];
      counter++;
    }
    loopcounter++;
  }
  // cout << "Loop Counter..." << loopcounter << "\t";
  return counter;
}