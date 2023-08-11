// Exponential (m)^n using recursion

#include <stdio.h>

int power(int m, int n)
{
    if (n > 0)
    {
        return m * power(m, n - 1);
    }

    return 1;
}

int power2(int m, int n) // number of operations is reduced
{
    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return power2(m * m, n / 2);
    }

    else
    {
        return m * power2(m * m, (n - 1) / 2);
    }

    return 1;
}

int main()
{
    int m = 10;
    int n = 1;

    printf("%d \n", power(m, n));

    return 0;
}