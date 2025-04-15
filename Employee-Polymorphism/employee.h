// Copyright 2025 CSCE240
// Define the Employee class
#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include<iostream>
using std::ostream;
#include<string>
using std::string;

namespace CSCE240_Employees {

class Employee {
  friend ostream& operator << (ostream&, const Employee&);

 public:
  explicit Employee(string first = "Jane", string last = "Doe",
                     string job_title = "TBD", int ppy = 0);
  // all derived class destructors will be virtual
  virtual ~Employee() {}
  void SetFirst(string f);
  void SetLast(string l);
  void SetJobTitle(string title);
  void SetPaysPerYear(int);

  string GetFirst() const { return first_name_; }
  string GetLast() const { return last_name_; }
  string GetJobTitle() const { return job_title_; }
  int GetPaysPerYear() const { return pays_per_year_; }

  virtual void Print() const;

  // the = 0 on the end of this prototype means that this is a
  // PURE VIRTUAL function - which turns this class into an abstract class
  // that can't be used to instatiate objects
  virtual double Pay() const = 0;
  // NOTE: interfaces in c++ are abstract classes
  // NOT all abstract classes are interfaces (this one isn't!)
  // since abstract classes can contain instance variables

 private:
  string first_name_;
  string last_name_;
  string job_title_;
  int pays_per_year_;
};  // end class Employee

}  // namespace CSCE240_Employees

#endif  // _EMPLOYEE_H_
