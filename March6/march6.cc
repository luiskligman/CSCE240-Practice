// Copyright 2025 lkligman
#include<iostream>
using std::cout;
using std::endl;
using std:: cin;
#include"temperature.h"

void IsItCold(Temperature temp) {
  if ( (temp.GetValue() > 50 && temp.GetUnit() == "Fahrenheit" )
      || (temp.GetValue() > 25 && temp.GetUnit() == "Celsius" )
      || (temp.GetValue() > 20 && temp.GetUnit() == "Kelvin" ) )
    cout << "Brrr" << endl;
}

int main() {
  Temperature t;  // default constructor of object TEMPERATURE

  cout << t << endl;

  cout << t.GetValue() << " " << t.GetUnit() << endl;
  t.SetUnit("Fahrenheit").SetValue(70);  // cascading t. to put multiple on the same line
  cout << t.GetValue() << " " << t.GetUnit() << endl;

  IsItCold(t);

  const Temperature freezing(32, "Fahrenheit");  // parameterized call of object TEMPERATURE
  cout << freezing.GetValue() << " " << freezing.GetUnit() << endl;
  IsItCold(freezing);

  IsItCold(static_cast<Temperature>(5));

  return 0;
}

