#include <stdio.h>

void TOH(int n, int A, int B, int C) // time - O(2^n)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("%d to %d \n", A, C); // steps to solve problem
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    TOH(3, 1, 2, 3);

    return 0;
}