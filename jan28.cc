// Copyright 2025 lkligman
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  // test an elemntary sutdent on their times tables
  int answer;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cout << i << " * " << j << "?\n";
      cin >> answer;
      if (answer == i * j)
      {
        cout << "Answer correct\n";
      }
      else
      {
        cout << "no, " << i << " * " << j << " = " << i * j << endl;
      }
    }
  }
  return 0;
}

/*
int main()
{
  int i = 0;
  while (i < 10)
  {
    cout << i << " ";
    ++i;
  }

  for (int i = 0; i < 10; ++i)
    cout << i << " ";
  return 0;
}
*/

/*
int main()
{
  // compute the average of a bunch of postive integers input by
  // the user
  int num, sum = 0, i = 0;
  cout << "Enter a bunch of positive integers ( enter 0 to quit) ";
  cin >> num;
  while (num > 0)
  {
    sum += num;
    ++i;
    cin >> num;
  }
  cout << "average = " << static_cast<double>(sum) / (i == 0 ? 1 : i) << endl;
}
*/

/*
int main()
{
  char letter_grade;
  double quality_points;
  cout << "Enter a letter grade ";
  cin >> letter_grade;
  switch (letter_grade)
  {
  case 'A':
    quality_points = 4;
    break;
  case 'B':
    quality_points = 3;
    break;
  case 'C':
    quality_points = 2;
    break;
  case 'D':
    quality_points = 1;
    break;
  default:
    quality_points = 0;
  }
  cout << "Quality points = " << quality_points << endl;
  return 0;
}
*/

/*
int main()
{
  // prompt the user for their height in inches and output
  // the height in feet and inches
  int height, feet, inches;
  cout << "Enter your height in inches ";
  cin >> height;
  feet = height / 12;
  inches = height % 12;
  cout << height << " inches = " << feet << (feet == 1 ? " foot " : " feet ")
       << "and " << inches << (inches == 1 ? " inch" : " inches") << endl;
  // if ( inches != 1)
  //   cout << height << " inches = " << feet << " feet and "
  //     << inches << " inches" << endl;
  // else cout << height << " inches = " << feet << " feet and "
  //   << inches << " inch" << endl;
  return 0;
}
*/