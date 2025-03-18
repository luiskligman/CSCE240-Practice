// Copyright 2025 lkligman
// Define the temperature class
#ifndef _TEMPERATURE_H_
#define _TEMPERATURE_H_
using std::ostream;
using std::cin;
using std::cout;

#include<string>
using std::string;

class Temperature {
  friend ostream& operator<<(ostream&, const Temperature&);
 public:
  // Construcotr - function with same name as the class, no return type, can take parameters,
  //                called when an object is instantiated
  // marking a constructor that can be called with exactly one argument prevents implicit casting of
  // values/variables of that argument type by calling the constructor
  explicit Temperature(double value = 30, string units = "Celsius");

  // destructor - function to do any necessary housecleaning when the memory for an object is released
  // name is ~classname, no return type, can't take any parameters
  ~Temperature();

  // accessor / getter - return a copy of the value of the private/protected
  //                       data members
  // a constant member function cannot modify the data members of the object it's called on
  double GetValue() const { return value_; }
  string GetUnit() const { return unit_; }

  // mutator / setter - update the value of the private/protected data member
  //                       ensuring that the valeus make sense
  bool SetValue(double value);
  Temperature& SetUnit(string value);

 private:
  double value_;  // google style guide - private data member names end with _
  string unit_;
};

#endif