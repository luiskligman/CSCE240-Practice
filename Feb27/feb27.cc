// Copyright 2025 Luis Kligman
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
  // get a students grade into a block of memory for frther
  // analysis
  int size = 5, i = 0;
  int * grades = new int[size];
  int next_grade;

  cout << "Enter grades (enter -1 to quit)" << endl;
  while ( next_grade != -1 ) {
    if ( i == size) {
      int * temp = grades;
      grades = new int[size + 5];
      for ( int j = 0; j < size; j++ )
        grades[j] = temp[j];
      delete[] temp;  // prevents memory leak of previous size 5 array after copying to an array of size 10
      size += 5;
    }
    grades[i] = next_grade;
    i++;
    cin >> next_grade;
  }


  return 0;
}



/*
int main() {
  const char * likert[5] = {"Strongly agree", "Agree", "Neither agree nor disagree",
                         "Disagree", "Stronly disagree"};
  for ( int i = 0; i < 5; i++) {
    cout << likert[i] << endl;
  }
  return 0;
}

 */

/*
int main() {
  char sentence[50] = "Check out his interesting sentence";
  cout << sentence << endl;

  char * c = sentence;
  cout << c << endl;

  c += 6;
  cout << c << endl;

  *c = 'P';
  cout << c << endl;
  cout << sentence << endl;

  return 0;
}

 */

/*
void SummaryStats(int x, int y, int& min, int& max, int& mean) {
  mean = ( x + y ) / 2;
  min = ( x < y ) ? x : y;
  max = ( x > y ) ? x : y;
}

 */

/*
void SummaryStats(int x, int y, int * min, int * max, int * mean) {
  *mean = ( x + y ) / 2;
  *min = ( x < y ) ? x : y;
  *max = ( x > y ) ? x : y;
}

int main() {
  int num1 = 5, num2 = 1, big, little, av;
  SummaryStats(num1, num2, &little, &big, &av);
  cout << "After the function call num1 = " << num1
      << " and num2 = " << num2 << " and big = " << big
      << " and little = " << little
      << " and av = " << av << endl;
  return 0;
}

 */

/*
int main() {
  int x = 5;
  cout << x << endl;
  cout << &x << endl;

  // inverse operations
  cout << *&x << endl;  // similiar to taking the derivative of an integral :: cancels out
//  cout << &*x << endl; would not work
  // commute from right to left

  int * ptr;
  ptr = &x;
  cout << ptr << endl;
  cout << &ptr << endl;

  // dereference pointer
  cout << *ptr << endl;

//  int * * ptrtoaptr;

  return 0;
}
*/
