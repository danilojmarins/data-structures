// In nested recursion, the parameter of a recursion call
// is also the recursive function. A recursive function
// pass a parameter as recursive call. It is a recursion
// inside recursion.

#include <stdio.h>

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else 
    {
        return fun(fun(n + 11));
    }
}

int main()
{
    int x = fun(95);
    printf("%d \n", x);
    
    return 0;
}