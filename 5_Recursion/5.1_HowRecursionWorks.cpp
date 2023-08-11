// A recursive function is a function that calls itself.
// In this case, there must be a condition to stop the recursion,
// otherwise, the recursion will run forever, generating
// errors in stack memory.

// Recursive functions have two phases: Calling and Returning
// A certain instruction can be performed during the calling
// phase or during the return phase.
// Calling - Ascending. Returning - Descending

// Difference between a loop and recursive function:
// loops only have Calling / Ascending phase
// recursive functions have Calling and Returning phases

// The recursive functions being called always create a stack
// frame on top of the previous call. When the base is reached
// and no other call is done, the functions return, deleting
// the activation record and moving the
// controll to the previous calls on the stack.

#include <stdio.h>

void fun(int n)
{
    if (n > 0) // condition to stop recursion
    {
        printf("%d \n", n); // output: 3, 2, 1 - calling phase
        fun(n - 1);         // function calls itself
        printf("%d \n", n); // output: 1, 2, 3 - returning phase
    }
}

int main()  // total memory used - O(n) - (n + 1 stack frames)
{
    int x = 3;
    fun(x);

    return 0;
}           // total time of execution - O(n)