// Copyright 2025 lkligman
// implement the functionality of the Temperature class
#include"temperature.h"
#include<string>
using std::string;

// if we implement a member function outside of the class definition,
// we need to tie it to the class with the scope resoltion operatore
Temperature::Temperature() {
    value_ = 30;
    unit_ = "Celsius";
}

void Temperature::SetUnit(string unit) {
  if ( unit == "Celsius" || unit == "Kelvin" || unit == "Fahrenheit" )
    unit_ = unit;
}

void Temperature::SetValue(double value) {
  if ( unit_ == "Kelvin" && value >= 0 )
    value_ = value;
  if ( unit_ == "Celsius" && value >= -273.15 )
    value_ = value;
  if ( unit_ == "Fahrenheit" && value >= -459.67 )
    value_ = value;
}