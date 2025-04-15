// Copyright 2025 CSCE240
// test functionality of Employee class
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include"employee.h"
#include"salaried.h"
#include"hourly.h"

using namespace CSCE240_Employees;

double Taxes(Employee& e, double rate) {
  return e.Pay() * rate;
}

int main() {
  SalariedEmployee s("Sue", "Susans", "CEO", 12, 2000000);
  HourlyEmployee h("Bob", "Roberts", "Programmer", 12, 50, 60);
  cout << s << endl;
  cout << "Taxes on " << s.Pay() << " = " << Taxes(s, .3) << endl;

  cout << h << endl;
  cout << "Taxes on " << h.Pay() << " = " << Taxes(h, .3) << endl;
  return 0;
}

//int main() {
//  Employee * ptr;
//  char which;
//  cout << "Do you want to create a (s)alaried employee or an (h)ourly "
//       << "employee? ";
//  cin >> which;
//  if ( which == 'h' )
//    ptr = new HourlyEmployee();
//  else
//    ptr = new SalariedEmployee();
//  ptr->Print();
//
//  return 0;
//}
