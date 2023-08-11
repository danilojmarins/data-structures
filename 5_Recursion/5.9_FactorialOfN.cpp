#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int factorialLoop(int n)
{
    int result = 1;

    for (n; n > 1; n--)
    {
        result = result * n;
    }

    return result;
}

int main()
{
    int n = 5;
    printf("%d \n", factorial(n));
    return 0;
}