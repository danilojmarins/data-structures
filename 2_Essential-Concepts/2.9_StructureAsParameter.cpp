// Structures can be passed by value and by address
// if a structure contains an array, it can be passed
// by value, even with the array. Note: arrays can only
// be passed by address.

#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle rect)
{
    return rect.length * rect.breadth; // doesn't change structure
}

void changeLength(struct Rectangle *p)
{
    p->length = 20; // changes the actual structure in memory
}

struct Rectangle * returnStructure()
{
    struct Rectangle *pHeap = new Rectangle; // create structure in heap
    return pHeap; // return pointer of structure in heap
}

int main()
{
    struct Rectangle r = { 10, 5 };
    changeLength(&r); // passing address of r
    int a = area(r); // passing r as value

    printf("%d \n", a);

    struct Rectangle *rHeap = returnStructure(); // store address of structure in heap

    rHeap->length = 10;
    rHeap->breadth = 5;

    int aHeap = area(*rHeap);

    printf("%d \n", aHeap);

    return 0;
}