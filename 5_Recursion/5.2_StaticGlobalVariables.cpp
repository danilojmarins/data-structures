// If a variable is statically or global defined,
// than the value is not going to be newly created after
// every function call of recursion.

#include <stdio.h>

int fun(int n)
{
    static int x = 0; // static variable

    if (n > 0)
    {
        x++;
        return fun(n - 1) + x; // copy of existing x value
    }

    return 0;
}

int fun2(int n)
{
    if (n > 0)
    {
        return fun2(n - 1) + n; // newly n value
    }

    return 0;
}

int main()
{
    int a = 5;
    printf("%d \n", fun2(a));
}