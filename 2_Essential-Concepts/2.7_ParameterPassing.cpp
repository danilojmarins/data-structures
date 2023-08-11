// there a 3 parameter passing methods:
// passing by value, address and reference

// in value passing, any change done in formal
// pararmeters will not reflect on actual parameters

// in address passing, changes done in formal parameters
// will reflect on actual parameters, because the parameters
// passed are pointers to the variable in memory -> indirect
// access of variables of another function using pointers

// in reference calling, changes are made to actual parameters,
// as address passing, because formal parameters are just
// references to the actual parameters stored in memory
// (int &x, int &y) parameters as reference, only in C++
// in this case, swap function executes inside the same stack
// frame as the main function -> NOT RECOMMENDED

#include <stdio.h>

void swap(int *x, int *y) // pointers as parameters
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    // value is accessed by address, actual parameters will change
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    
    swap(&a, &b); // passing the addresses of a and b

    printf("%d, %d \n", a, b); // 20, 10

    return 0;
}