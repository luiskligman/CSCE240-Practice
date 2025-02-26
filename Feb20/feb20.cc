// Copyright 2025 lkligman
#include"arrayfunctions.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
using std::cout;
using std::endl;

int main() {
  const int kRows = 5;
  const int kCols = 3;
  int big_array[kRows][kCols] = { {3, 5}, {-1}, {5}, {6} };
  for ( int r = 0; r < kRows; r++ ) {
    for ( int c = 0; c < kCols; c++ ) {
      cout << big_array[r][c] << " ";
    }
    cout << endl;
  }
  cout << big_array << endl;  // address of first element
  cout << big_array[0] << endl;  // address of 1st row
  cout << big_array[1] << endl;  // address of 2nd row
  cout << big_array[0][0] << endl; // first element, first row / first column
  return 0;
}

/*
int main() {
  srand(time(0));
  const int kSize = 10;
  int my_array[kSize] = { 52, -400, 1 };
  Populate(my_array, kSize, -5 , 3);
  PrintArray(my_array, kSize);
  Insertion(my_array, kSize);
  PrintArray(my_array, kSize);
  return 0;
}
*/
