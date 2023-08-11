// 2 dimensional arrays are used to create matrices
// and storing tabular data. The memory allocation
// for 2 dimensional arrays are also linear and
// contiguous, just like a normal 1 dimensional array.

// Other way to create a 2 dimensional array is by creating
// an array of pointers, with each pointer pointing to an
// array in heap.

// Similarly, a pointer to an array of pointers in heap
// can be created, this each of the pointer in this array
// also refers to another array. Allocating both the array
// of pointers and the actual arrays in heap.

#include <stdio.h>

int main()
{
    // everything in stack

    int A[3][4]; // 3 rows 4 columns - 3*4*int bytes allocated
    int B[3][4] = {{1,2,3,4},{5,6,7,8},{2,4,6,8}};


    // partially stack - heap

    int *P[3]; // create array of pointers;
    P[0] = new int[4]; // pointer to array in heap
    P[1] = new int[4];
    P[2] = new int[4];


    // everything in heap

    int **P2; // pointer to a pointer
    P2 = new int *[3]; // array of pointers in heap
    P2[0] = new int[4]; // actual arrays in heap
    P2[1] = new int[4];
    P2[2] = new int[4];


    // access 2D arrays

    for (int i = 0; i < 3; i++) // access columns
    {
        for (int j = 0; j < 4; j++) // access rows
        {
            printf("%d ", P2[i][j]); // access each element
        }

        printf("\n");
    }

    return 0;
}