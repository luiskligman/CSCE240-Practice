//Copyright 2024 lkligman
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void PrintArray(const int[], int);

// linear search
int LinearSearch(const int[], int, int);

int main() {
  const int kSize = 10;
  int grades[kSize] = { 100, 100, 90 , 85 };
  PrintArray(grades, kSize);
  cout << LinearSearch(grades, kSize, 0);
  return 0;
}

void PrintArray(const int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int LinearSearch(const int arr[], int size, int search_value) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == search_value) {
      return i;
    }
  }
}

/*
int main() {
  // will set the array to a block that's an exact fit if
  // the [] are left empty
  // array size is 4 in this case
  double some_stuff[] = { -1.2 , 3, 17, 100.867 };

  cout << "Enter 10 values ";
  for ( int i = 0; i < 10; ++i ) {
    cin >> some_stuff[i];
    for ( int j = 0; j < 10; ++j ) {
      cout << some_stuff[j] << " ";
    }
    cout << endl;
  }
  return 0;
}
*/



/*
int main() {
  cout << sizeof(int) << endl;
  cout << sizeof(double) << endl;

  // using a constant varialbe ofr the size of the array will
  // help us if we ever need to modify the size in our code -
  // allowing us to change it in one location
  const int kSize = 6;
  // we have one opportunity to initialize all the values at once
  // values left out will be initialized to zero
  int program_grades[kSize] = { 9, 9 };

  cout << program_grades << endl;

  cout << sizeof(program_grades) << endl;

  for ( int i = 0; i < kSize; i++ ) {
    cout << program_grades[i] << endl;
  }


  return 0;
}
*/