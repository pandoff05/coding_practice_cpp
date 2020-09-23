/*
* author : Muhammad Nurhaziq bin Mohd Zamani
* find max and min in an array of numbers
* problem: -
* - problem to pass an array through reference by using ampersand(&)
*/
#include <iostream>
using namespace std;

int findMin(int[], int);
int findMax(int[], int);
void printArr(int[], int);

int main()
{
  cout << "Enter Number of Array: " << endl;
  int arrNum;
  cin >> arrNum; 
  int arr[arrNum] = {0};
  for (int i = 0; i < arrNum; i++)
  {
    cin >> arr[i];
  }
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  // printArr(arr, arrSize);
  cout << findMin(arr, arrSize) << "\t" << findMax(arr, arrSize) << endl;
  return 0;
}

int findMin(int arr[], int size)
{
  int min = INT32_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}

int findMax(int arr[], int size)
{
  int max = INT32_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "\t";
  }
}