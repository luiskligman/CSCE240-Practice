// Copyright 2025 CSCE240
// Implement the Employee class functionality
#include"employee.h"
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

namespace CSCE240_Employees {

void Employee::Print() const {
  cout << "Employee Name: " << first_name_ << " " << last_name_
       << "\nJob Title: " << job_title_
       << "\nPay periods per year: " << pays_per_year_ << endl;
}

Employee::Employee(string first, string last, string job_title,
                    int ppy) :
    first_name_("Jane"), last_name_("Doe"), job_title_("TBD"),
    pays_per_year_(0) {
  SetFirst(first);
  SetLast(last);
  SetJobTitle(job_title);
  SetPaysPerYear(ppy);
}

void Employee::SetPaysPerYear(int ppy) {
  if ( ppy == 0 || ppy == 365 || ppy == 52 || ppy == 12 || ppy == 26
         || ppy == 24 )
    pays_per_year_ = ppy;
}

void Employee::SetFirst(string f) {
  if ( f.length() > 0 )
    first_name_ = f;
}

void Employee::SetLast(string l) {
  if ( l.length() > 0 )
    last_name_ = l;
}

void Employee::SetJobTitle(string title) {
  if ( title.length() > 0 )
     job_title_ = title;
}


ostream& operator << (ostream& where, const Employee& who) {
  where << "Employee Name: " << who.first_name_ << " " << who.last_name_
        << "\nJob Title: " << who.job_title_;
  return where;
}

}  // namespace CSCE240_Employees




