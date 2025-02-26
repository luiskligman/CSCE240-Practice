// Copyright 2025 lkligman
#ifndef __ARRAYFUNCTIONS_H__
#define __ARRAYFUNCTIONS_H__

// function to capitalize the first character of each word in a sentence
// that's held in a cstring
// precondition: the array parameter is a null-terminated cstring
void Capit(char sentence[]);

const int kCols = 3;

// compute the column sums in a 2d array of intergers with kCols columns
// precondition: the third argument is an array of at least kCols int
void ColumnSums(const int[][kCols], int rows, int col_sums[]);

// output a 2d array
void PrintArray(const int [][kCols], int num_rows);
// further dimensions must have sizes, first dimensions not required to have set size

// insertion sort
void Insertion(int a[], int size);

// populate an array with a bunch of "random" integers
void Populate(int [], int size , int min = 0, int max = 100);

// if field_width = 0, width will be set to 1 larger than the
// length of the int that takes up the mose space
void PrintArray(const int[], int size, int field_width = 0);

// Linear Search
int LinearSearch(const int[], int);

#endif