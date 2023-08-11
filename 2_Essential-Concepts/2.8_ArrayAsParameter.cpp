// Arrays are always passed by address, it can not be
// passed by value. Modifying it on function will
// modify actual parameter stored on memory.

// if something is created in heap, every part of
// the program can access it as long as a pointer
// to it is created and passed.

#include <stdio.h>
#include <stdlib.h>

void printArr(int A[], int n)
{
    A[0] = 25; // actual array in memory is changed
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", A[i]);
    }
}

int * returnArray(int n)
{
    int *p;
    p = new int[n]; // create array in heap
    return p; // pointer to array in heap is returned
}

int main()
{
    int *A;
    A = returnArray(5);

    A[0] = 2;
    A[1] = 4;
    A[2] = 6;
    A[3] = 8;
    A[4] = 10;

    printArr(A, 5);

    delete [ ] A;

    return 0;
}