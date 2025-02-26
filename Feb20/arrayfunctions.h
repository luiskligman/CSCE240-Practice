// Copyright 2025 lkligman
#ifndef __ARRAYFUNCTIONS_H__
#define __ARRAYFUNCTIONS_H__

void Print2D(const int [][3], int num_rows);
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