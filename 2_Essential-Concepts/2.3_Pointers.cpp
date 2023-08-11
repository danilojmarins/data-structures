// Pointers are address variables, it stores address of data
// are used for indirectly accessing the data
// Main memory is divided in 3 parts: Code, Stack and Heap
// Code (main/program) can access the Code and Stack
// Pointers are used to access the Heap, access other resources
// such as keyboard, HD etc. And for Parameter Passing.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10; // data variable, stored on stack
    int *p; // pointer / address variable, stored on stack
    p = &a; // assingning address of a to pointer p

    printf("Value of a: %d \n", a);
    printf("Value of a: %d \n", *p); // dereferencing
    printf("Address of a: %n \n", p);

    int *p2;
    p2 = (int*)malloc(5 * sizeof(int)); // C -> malloc() creates a space on Heap
    p2 = new int[5]; // C++ -> new keyword creates on Heap

    printf("Value of a: %d \n", *p2);

    free(p2); // C -> deletes from heap
    delete p2; // C++ -> deletes from heap

    int ArrStack[5] = {2,4,6,8,10}; // array created in Stack
    int *p3;
    p3 = ArrStack; // no need to write &Arr in arrays. &Arr[0] also correct.

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p3[i]);
    }

    int *p4;
    p4 = (int*)malloc(5 * sizeof(int)); // array created in Heap

    p4[0] = 2;
    p4[1] = 4;
    p4[2] = 6;
    p4[3] = 8;
    p4[4] = 10;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p4[i]);
    }

    free(p4); // C -> deallocating array allocated in heap
    delete [ ] p4; // C++ -> deallocating array allocated in heap

    return 0;
}

// Size of a pointer is the same for different types of data
// pointer always have size of 8 bytes on modern computers