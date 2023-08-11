#include <stdio.h>

int fib(int n) // time - O(2^n)
{
    if (n > 1)
    {
        return fib(n - 2) + fib(n - 1);
    }

    return n;
}

int fibLoop(int n) // time - O(n)
{
    int r;
    int t0 = 0;
    int t1 = 1;

    if (n <= 1) return n;

    for (int i = 2; i <= n; i++)
    {   
        r = t0 + t1;
        t0 = t1;
        t1 = r;
    }

    return r;
}

int F[10]; // global array to memoize

int fibMemoization(int n) // time - O(n)
// Memoize value of known operations in global
// array, avoiding further unecessary recursions,
// reducing the time complexity of function
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }

    if (F[n - 2] == -1)
    {
        F[n - 2] = fibMemoization(n - 2);
    }

    if (F[n - 1] == -1)
    {
        F[n - 1] = fibMemoization(n - 1);
    }

    F[n] = F[n - 2] + F[n - 1];

    return F[n - 2] + F[n - 1];
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }

    printf("%d \n", fibMemoization(7));

    return 0;
}