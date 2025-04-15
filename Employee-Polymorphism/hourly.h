// Copyright 2025 CSCE240
// define Hourly Employee class as child of Employee
#ifndef HOURLY_H_
#define HOURLY_H_

#include<string>
#include"employee.h"
using std::string;

namespace CSCE240_Employees {

class HourlyEmployee : public Employee {
 public:
  explicit HourlyEmployee(string first = "Jane", string last = "Doe",
                          string title = "TBD", int ppy = 26,
                          double rate = 7.25, double hours = 40);
  void SetHourlyWage(double);
  void SetHoursWorked(double);
  double GetHourlyWage() const { return hourly_wage_; }
  double GetHoursWorked() const {return hours_worked_; }

  void Print() const override;

  double Pay() const override { return hourly_wage_ * hours_worked_; }

 private:
  double hourly_wage_;
  double hours_worked_;
};  // end class HourlyEmployee

}  // end namespace CSCE240_Employees

#endif
