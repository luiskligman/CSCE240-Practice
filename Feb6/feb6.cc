//Copyright 2025 lkligman
#include<iostream>
#include "somefunctions.h"
using std::cout;
using std::cin;
using std::endl;
#include<ctime> //we will use the clock function from this library

int main() {
  int start;
  for ( int i = 0; i < 26; i++ ) {
    cout << "\r" << static_cast<char>('A' + i);
    cout.flush();
    start = clock();
    while( clock() - start < 500000 );
  }
  return 0;
}

//int main() {
//  int x, y;
//  cin >> x >> y;
//  cout << GCD(x, y) << endl;
//  return 0;
//}

//int main() {
//cout << CLOCKS_PER_SEC << endl;
//  for (int i = 1; i < 10; i++) {
//    int start = clock();
//    cout << Fib(i) << " " << "took " << clock() - start << " clock ticks " << (clock() - start) / CLOCKS_PER_SEC << " seconds " << endl;
//  }
//  return 0;
//}

//int main() {
//  for (int i = 1; i <= 10; i++) {
//    cout << Factorial(i) << " " << FactorialI(i) << endl;
//  }
//  return 0;
//}