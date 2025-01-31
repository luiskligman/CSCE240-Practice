// Copyright 2025 lkligman
// file contains the implementations of the functions with prototypes in somefunctions.h

// function to compute the average of three doubles
// This function overloads the previous average function, same name but distinct parameter list

double Average(double x, double y, double z)
{
    return (x + y + z) / 3;
}

// function to compute the average of two doubles
double Average(double x, double y)
{
    return (x + y) / 2;
}

char Average(char a, char b)
{
    return (a + b) / 2;
}
