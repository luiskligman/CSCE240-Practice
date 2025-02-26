// Copyright 2025 lkligman
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"arrayfunctions.h"

#include<fstream>
using std::ifstream;
using std::ofstream;

#include<string>
using std::string;

int main() {
  string filename;
  cout << "What file do you want to open?";
  cin >> filename;
  ifstream in(filename);
  char c;
  while ( in.good() ) {  // in.good makes sure file is in a good state, if so returns true, else false
  //  in >> c;
    c = in.get();
    cout << c;
  }
  in.close();
  return 0;
}

/*
int main() {
  ofstream some_file("checkit.txt", std::ios::app);
  cout << "Enter some integers (enter -9999 to quit) ";
  int x;
  cin >> x;
  while ( x != -9999 ) {
    some_file << x << endl;
    cin >> x;
  }
  some_file.close();
  return 0;
}
*/

/*
int main() {
  // cstring - a null-character '\0' terminated character string
  char words[6] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' };
  for(int i = 0; i < 5; i++) {
    cout << words[i];
  }
  cout << endl;

  int i = 0;
  while( words[i] != '\0') {
    cout << words[i++];
  }
  cout << endl;

  cout << words << endl;
//  cout << static_cast<void *>(words) << endl;

  cout << "Enter a new word ";
//  cin >> words;
  cin.getline(words, 7, ' ' );
  cout << "Here's what I got " << words << endl;

  char phrase[] = "how are you doing today?";  // array of 25 characters
  cout << phrase << endl;
  Capit(phrase);
  cout << phrase << endl;


  return 0;
}
*/

/*
int main() {
  const int kRows = 7;
  int numbers[kRows][kCols] = { {1}, {1, 2}, {3, 4, 5}, {4} };
  PrintArray(numbers, kRows);  // calls 2D version
  PrintArray(numbers[1], kCols);  // calls the 1D version
  int sums[kCols];
  ColumnSums(numbers, kRows, sums);
  PrintArray(sums, kCols);
}
*/