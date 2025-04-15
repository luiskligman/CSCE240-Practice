// Copyright 2025 CSCE240
// define SalariedEmployee as a child of Employee
#ifndef _SALARIED_H_
#define _SALARIED_H_

#include<string>
#include"employee.h"
using std::string;

namespace CSCE240_Employees {

class SalariedEmployee : public Employee {
 public:
  explicit SalariedEmployee(string first = "Jane", string last = "Doe",
                   string title = "TBD", int ppy = 26,
                   double salary = 0);
  void SetSalary(double salary);
  double GetSalary() const { return annual_salary_; }

  void Print() const override;  // overriding the virtual function
                                // inherited from employee
  double Pay() const override { return annual_salary_ / GetPaysPerYear(); }

 private:
  double annual_salary_;
};

} // end namespace CSCE240_Employees

#endif
