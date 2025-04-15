// Copyright 2025 CSCE240
// implement Hourly Employee class functionality
#include"hourly.h"
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"employee.h"

namespace CSCE240_Employees {

void HourlyEmployee::Print() const {
  Employee::Print();
  cout << "Hourly Wage: $" << hourly_wage_
       << "\nHours Worked: " << hours_worked_ << endl;
}


HourlyEmployee::HourlyEmployee(string f, string l, string j, int ppy,
                               double rate, double hrs) :
                       Employee(f, l, j, ppy), hourly_wage_(7.25),
                       hours_worked_(40) {
  SetHourlyWage(rate);
  SetHoursWorked(hrs);
}

void HourlyEmployee::SetHourlyWage(double rate) {
  if ( rate >= 7.25 )
    hourly_wage_ = rate;
}

void HourlyEmployee::SetHoursWorked(double hrs) {
  if ( hrs >= 0 )
    hours_worked_ = hrs;
}

}  // end namespace CSCE240_Employees
