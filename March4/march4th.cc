// Copyright 2025 lkligman
#include<iostream>
using std::cout;
using std::endl;
using std:: cin;
#include<string>
using std::string;

#include"temperature.h"

/*
class Temperature {
public:
  double value;
  string unit;
};
*/

/*
struct Temperature {
// public:    // members of a structure are public by default
  double value;
  string unit;
};  // semicolon required
*/

int main() {
  Temperature t;
  cout << t.GetValue() << " " << t.GetUnit() << endl;
//  t.value = 70;
//  t.unit = "Fahrenheit";
  t.SetValue(70);
//  cout << t.value << " " << t.unit << endl;
  t.SetUnit("Fahrenheit");
  Temperature * ptr = &t;
  cout << t.GetValue() << " " << t.GetUnit() << endl;

  cout << ptr->GetValue() << " " << ptr->GetUnit() << endl;
  //cout << (*ptr).value << " " << (*ptr).unit << endl;
//  cout << ptr->value << " " << ptr->unit << endl; // equivalent to above but displays more simplicity

  return 0;
}

/*
int main() {
  int size = 100000;
  double * num = new double[size];
  char more = 'y';
  while (more == 'y') {
    ++size;
    delete [] num;  // releasing the dynamically allocated memory for
    num = new double[size];
    for ( int i = 0; i < size; ++i )
      num[i] = 1;  // *(num + 1) = 1
    cout << "Current size is " << size << ". Want more? ";
    cin >> more;
  }
  return 0;
}
*/
