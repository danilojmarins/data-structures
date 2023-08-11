// Function is a piece of code which performs
// a specific task, group of related instructions
// functions are also called modules or procedures
// MONOLITHIC -> every instructions inside of main function
// MODULAR/PROCEDURAL -> separating tasks into smaller functions
// C is a Procedural programming language
// C++ is an Object-Oriented programming language

#include <stdio.h>

int add(int a, int b) // declaration of function
{ // a, b -> formal parameters
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int x, y, z;
    x = 10;
    y = 5;

    z = add(x, y); // calling add function passing x and y as parameters
    // x, y -> actual parameters

    printf("%d \n", z);

    return 0;
}