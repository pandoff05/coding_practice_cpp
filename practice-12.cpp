/*
 * Sudoku - a puzzle game with the rule of a set grid with 9x9
 * area. It will then be divided to 9 smaller grid. 
 * In each row, column and smaller grid must not have the same 
 * number. 
 */
#include <iostream>
using namespace std;
#define SIZE 9;

const int UNASSIGNED = 0;
// const int SIZE = 9;

// bool findUnassigned(int[][SIZE], int&, int&);
// bool usedInCol(int[][SIZE], int, int, int);
// bool usedInRow(int[][SIZE], int, int, int);
// bool usedInSmallerGrid(int[][SIZE], int, int, int);
// bool solvedSudoku(int[][SIZE]);
// void printGrid(int[][SIZE]);

/* 
* search the grid if there are any unassigned slot 
* return true if found any
* */
bool findUnassigned(int grid[SIZE][SIZE], int& row, int& col){
  for(int row = 0; row < SIZE; row++) {
    for(int col = 0; col < SIZE; col++){
      if(grid[row][col] == UNASSIGNED){
        return true;
      }
    }
  } 
  return false;
}
/* 
 * check if there are any similar number in a column
 * return true if there are any
 * */
bool usedInCol(int grid[SIZE][SIZE], int row, int col, int num){
  for(int col = 0; col < SIZE; col++){
    if(grid[row][col] == num){
      return true;
    }
  }
  return false;
}

/* 
 * check if there are any similar number in a row
 * return true if there are any
 * */
bool usedInRow(int grid[SIZE][SIZE], int row, int col, int num){
  for(int col = 0; col < SIZE; col++){
    if(grid[row][col] == num){
      return true;
    }
  }
  return false;
}

bool usedInSmalleGrid(int grid[SIZE][SIZE], int rowStart, int colStart, int num){
  /* 
   * the use of row + rowStart and col + colStart is because so that it is easier
   * to use with the same loop
   * */
  for(int row = 0; row < 3; row++){
    for(int col = 0; col < 3; col++){
      if(grid[row + rowStart][col + colStart] == num){
        return true;
      }
    }
  }
  return false;
}


/* 
 * isValid() return true if all the conditions are fullfilled 
 * check if num have similar value in the same  col, row and small grid
 * */

bool isValid(int grid[SIZE][SIZE], int row, int col, int num){
  // printGrid(grid);
  return !usedInCol(grid, row, col, num) 
  && !usedInRow(grid, row, col, num) 
  && !usedInSmalleGrid(grid, row - row%3, col - col%3, num)
  &&  grid[row][col] == UNASSIGNED;
}

void printGrid(int grid[SIZE][SIZE]){
  for(int row = 0; row < SIZE ; row++){
    for(int col = 0; col < SIZE; col++){
      cout << grid[row][col] << " ";
    }
    cout << endl;
  }
}

/* 
 *recursive function to check the sudoku is solved or not
 **/
bool solvedSudoku(int grid[SIZE][SIZE]) {
  int row, col;
  /**
   * if there are no unassigned location the sudoku is solved
   */
  if(findUnassigned(grid, row, col) == false){
    return true;
  }
  for(int num = 1; num <= SIZE; num++){
    if(isValid(grid,row, col, num)){
      grid[row][col] = num;
      printGrid(grid); cout << endl;
    
      /* 
      * recursive happen here. 
      * Function will continuously be call to check if the sudoku is solve or not
      * return true if it is finally be solved 
      */
      if(solvedSudoku(grid)){
        return true;
      }
      // if sudoku is not solved assigned back to unassigned
      grid[row][col] = UNASSIGNED;
    }
  }
  // trigger backtracking
  return false;
}




int main(){

  cout << "hello";
  int grid[SIZE][SIZE] = {
    {3,0,6,5,0,8,4,0,0},
    {5,2,0,0,0,0,0,0,0},
    {0,8,7,0,0,0,0,3,1},
    {0,0,3,0,1,0,0,8,0},
    {9,0,0,8,6,3,0,0,5},
    {0,5,0,0,9,0,6,0,0},
    {1,3,0,0,0,0,2,5,0},
    {0,0,0,0,0,0,0,7,4},
    {0,0,5,2,0,6,3,0,0}
  };

  if(solvedSudoku(grid)){
    printGrid(grid);
  }else{
    cout << "No Solution";
  }
  return 0;
}
