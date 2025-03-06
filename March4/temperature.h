// Copyright 2025 lkligman
// Define the temperature class
#ifndef _TEMPERATURE_H_
#define _TEMPERATURE_H_

#include<string>
using std::string;

class Temperature {
 public:
  Temperature();
  // accessor / getter - return a copy of the value of the private/protected
  //                       data members
  double GetValue() { return value_; }
  string GetUnit() { return unit_; }

  // mutator / setter - update the value of the private/protected data member
  //                       ensuring that the valeus make sense
  void SetValue(double value);
  void SetUnit(string value);

 private:
  double value_;  // google style guide - private data member names end with _
  string unit_;
};

#endif