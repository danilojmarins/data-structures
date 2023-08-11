// A tail recursion is when a function calls itself
// and the statement responsible for calling itself
// is the last statement of that function, there is
// nothing to execute after the recursion call.

// The recursion call must also not contain any
// inline operations, because they are executed at
// returning time. fun(n - 1) + n;

// This means that whichever operation that comes before
// the function call will execute at calling time, and
// nothing will be executed at returning time.

// A tail recursion can be directly converted into a loop
// and the loop is more space efficiently, because it does
// not use stack memory to store variables of each recursion.

#include <stdio.h>

void fun(int n)
{
    if (n > 0)
    {
        printf("%d \n", n); // executed at calling time
        fun(n - 1);         // calls itself at end of function
    }
}

void funLoop(int n) // recursion converted to loop
{
    while (n > 0)
    {
        printf("%d \n", n);
        n--;
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}