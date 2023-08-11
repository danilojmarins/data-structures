// Structure is a group of related data
// a structure contain variables inside
// which are the properties of that structure

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle // Definition of a Structure
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct Rectangle r1; // Initializing r1 variable of type Rectangle
    r1 = { 10, 20 };

    r1.breadth = 5;

    int area = r1.length * r1.breadth;

    printf("Size of structure is: %ld \n", sizeof(r1));
    // Sum of sizes of structure elements is 9,
    // but it is rounded up to 12 -> Padding.

    printf("Area of rectangle is: %d \n", area);

    return 0;
}