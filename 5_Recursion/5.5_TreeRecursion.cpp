// Unlike linear recursion, a tree recursion is when
// a function calls itself more than 1 time.

#include <stdio.h>

void fun(int n) // time complexity - O(2^n) // space - O(n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}