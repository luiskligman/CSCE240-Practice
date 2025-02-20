// Copyright 2025 lkligman
// file contains the implementations of the functions with prototypes in somefunctions.h

// function to compute the average of three doubles
// This function overloads the previous average function, same name but distinct parameter list
#include"somefunctions.h"
#include<cmath>

int GCD(int n, int m) {
  if ( n == 0 || m == 0 )
    return 1;
  n = abs(n);
  m = abs(m);
  if ( n % m == 0 )
    return m;
  return GCD(m, n % m); //reduces quickly to a base case!
}

//Terrible recursive function
int Fib(int n) {
  if (n < 2)
    return 1;
  return Fib(n-1) + Fib(n-2);
}

int Factorial (int n) {
  if ( n < 0 )
    return 0;
  if ( n == 0 )
    return 1;
  return n * Factorial (n-1); // Recursive function call
}

int FactorialI (int n) {
  if ( n < 0 )
    return 0;
  int answer = 1;
  for( int i = 2; i <= n; i++ )
    answer *= i;
  return answer;
}