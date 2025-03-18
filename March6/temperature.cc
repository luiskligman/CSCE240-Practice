// Copyright 2025 lkligman
// implement the functionality of the Temperature class
#include"temperature.h"
#include<string>
using std::string;

#include<iostream>
using std::cout;
using std::endl;
using std::ostream;

ostream& operator<<(ostream& whereto, const Temperature& temperature) {
  whereto << temperature.value_ << " " << temperature.unit_;
  return whereto;
}

Temperature::~Temperature() {
  cout << "Destructor for " << value_ << " " << unit_ << " called" << endl;
}

// if we implement a member function outside of the class definition,
// we need to tie it to the class with the scope resolution operatore
Temperature::Temperature(double value, string unit) : value_(30), unit_("Celsius") {
  //    value_ = 30;
  //    unit_ = "Celsius";
  SetUnit(unit);
  SetValue(value);
}

// every object has a this pointer that holds it address
// every non-static member function has access to the this pointer
// giving the address it was called on
Temperature& Temperature::SetUnit(string unit) {
  if ( unit == "Kelvin" && value_ >= 0 )
    unit_ = unit;  // this->unit_ = unit;
  if ( unit == "Celsius" && value_ >= -273.15 )
    unit_ = unit;
  if ( unit == "Fahrenheit" && value_ >= -459.67 )
    unit_ = unit;
  return *this;
}

bool Temperature::SetValue(double value) {
  if ( unit_ == "Kelvin" && value >= 0 )
    value_ = value;
  if ( unit_ == "Celsius" && value >= -273.15 )
    value_ = value;
  if ( unit_ == "Fahrenheit" && value >= -459.67 )
    value_ = value;
  return value_ == value;
}

