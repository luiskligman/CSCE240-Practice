// Copyright 2025 lkligman
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>
#include <iomanip>
// We will use double quotesa around user-defined headers in our include statements
#include "somefunctions.h"

int main()
{
    cout << Average(3.7, 5.4) << endl;
    cout << Average(1, 2, 4) << endl;
    cout << Average('A', 'C') << endl;
    return 0;
}

/*
int main()
{
    cout << std::setiosflags(std::ios::fixed);
    cout << std::setprecision(3);
    // double ceil(double); - prototype
    // ceil(double) - signature
    // calling the ceil function below - argument = 4.1
    cout << ceil(4.1) << endl;
    double x = -4.1, z = 0.0010054;
    cout << ceil(x) << endl;

    // doube pow(double, double);
    double y = pow(5, 0.5);
    cout << std::setw(10) << y << "\n"
         << std::setw(10) << x << "\n"
         << std::setw(10) << z << endl;

    return 0;
}
*/