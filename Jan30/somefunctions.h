// Copyright 2025 lkligman

//header guards - purpose is to avoid multiple definitions of the code between the ifndef and endif
//NOTE: ignore cpplint error about using path in the preprocessor directives below
#ifndef _SOMEFUNCTIONS_H_
#define _SOMEFUNCTIONS_H_

// Function to compute the average of two doubles
double Average(double, double);
double Average(double, double, double);
char Average(char, char);

#endif

// // function to compute the average of three doubles
// // This function overloads the previous average function, same name but distinct parameter list
// double Average(double x, double y, double z)
// {
//     return (x + y + z) / 3;
// }
//
// // function to compute the average of two doubles
// double Average(double x, double y)
// {
//     return (x + y) / 2;
// }
//
// char Average(char a, char b)
// {
//     return (a + b) / 2;
// }


