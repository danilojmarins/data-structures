// Reference is only available on C++
// Reference is an alias given to a variable
// just another name given to the same variable
// mostly used on parameter passing
// if variable value is changed, reference also changes
// if reference value is changed, variable also changes.

#include <stdio.h>

int main()
{
    int a = 10; // normal data variable
    int &r = a; // reference r referencing value of a
    // two names for the same value in memory

    printf("%d \n", a); // 10
    printf("%d \n", r); // 10
    
    r++;

    printf("%d \n", a); // 11
    printf("%d \n", r); // 11

    int b = 20;
    r = b;

    printf("%d \n", a); // 20
    printf("%d \n", r); // 20

    return 0;
}