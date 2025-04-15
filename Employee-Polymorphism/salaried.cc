// Copyright 2025 CSCE240
// implement SalariedEmployee functionality
#include"salaried.h"
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"employee.h"

namespace CSCE240_Employees {

SalariedEmployee::SalariedEmployee(string f, string l, string jt,
                                   int ppy, double sal)
                                         : Employee(f, l, jt, ppy) {
  annual_salary_ = 0;
  SetSalary(sal);
}

void SalariedEmployee::SetSalary(double salary) {
  if ( salary >= 0 )
    annual_salary_ = salary;
}

void SalariedEmployee::Print() const {
  Employee::Print();
  cout << "Annual Salary: $" << annual_salary_ << endl;
}

}  // end namespace CSCE240_Employees
