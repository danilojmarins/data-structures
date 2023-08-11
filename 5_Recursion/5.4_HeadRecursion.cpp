// A head recursion is when a function calls itself
// and the statement responsible for calling itself
// is the first statement of that function, there is
// nothing to execute before the recursion call.

// This means that whichever operation that comes after
// the function call will execute at returning time, and
// nothing will be executed at calling time.

// A head recursion can not be directly converted to a loop
// for this, it requires some modifications like working
// with other variables.

#include <stdio.h>

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);         // calls itself at start of function
        printf("%d \n", n); // executed at returning time
    }
}

void funLoop(int n) // recursion converted to loop
{
    int i = 1;

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}