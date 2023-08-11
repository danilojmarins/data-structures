// Indirect recursion happens when a function call another
// function and that function called calls the first.
// Both functions calls each others.
// funA() -> funB() | funB() -> funA()

#include <stdio.h>

void funA(int n);
void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        printf("%d \n", n);
        funA(n / 2);
    }
}

int main()
{
    funA(20);

    return 0;
}