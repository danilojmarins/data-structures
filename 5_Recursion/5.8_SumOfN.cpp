// Sum of first N natural numbers

#include <stdio.h>

int sum(int n) // Time O(n) - Space O(n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }

    return n;
}

int sumLoop(int n) // Time O(n) - Space O(1)
{
    int sum = 0;

    for (n; n > 0; n--)
    {
        sum = sum + n;
    }

    return sum;
}

int main()
{
    int n = 100;
    printf("%d \n", sumLoop(n));
}