// Copright 2025 lkligman
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include"arrayfunctions.h"
using std::cout;
using std::endl;

void Print2D(const int a[][3], int num_rows) {
  for ( int i = 0; i < num_rows; ++i ) {
    for ( int j = 0; j < 3; ++j ) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}


// insertion sort
void Insertion(int a[], int size) {
  int start = clock();
  for (int sorted = 1; sorted < size; ++sorted ) {
    int i = sorted;
    while ( i > 0 && a[i] < a[i-1] ) {
      int temp =a[i-1];
      a[i-1] = a[i];
      a[i] = temp;
      --i;
    }
  }
  cout << clock() - start << endl;
}

// populate an array with a bunch of "random" integers
void Populate(int a[], int size, int min, int max) {
  if ( min > max ) {  // incase min > max : SWAP
    int temp = min;
    min = max;
    max = temp;
  }
  for ( int i =0; i < size; i++)
    a[i] = rand() % (max - min + 1) + min;
}

void PrintArray(const int arr[], int size, int field_width) {
  if ( field_width == 0 ) {
    int width = 1;
    for ( int i = 0; i < size; ++i ) {
      width = 2;  // width is int, setting to log truncates, so +1
                  //for digit count (also 0 = 1 digit)
                  // + 1 for a space between value
      if ( arr[i] != 0 ) {
        width += log10(abs(arr[i]));
      }
      if ( arr[i] < 0 )
        ++width;  // account for - sign
      if ( width > field_width ) {
        field_width = width;
      }
  }
}

  for (int i = 0; i < size; ++i)
      cout << std::setw(field_width) << arr[i];;
    cout << endl;
}

int LinearSearch(const int arr[], int size, int search_value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == search_value) {
            return i;
        }
    }
    return -1;
}