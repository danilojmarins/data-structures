#include <stdio.h>

float e(int x, int n)
{
    static float p = 1; // stores the power value
    static float f = 1; // stores the factorial value

    float r;

    if (n > 0)
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return (p / f) + r;
    }

    return 1;
}

float eHorners(int x, int n) // reduced number of operations
{
    static float r = 1;

    if (n > 0)
    {
        r = 1 + x * r / n;
        return eHorners(x, n - 1);
    }

    return r;
}

float eLoop(int x, int n) // using loops
{
    float r = 1;
    float p = 1;
    float f = 1;

    for (int i = 1; i <= n; i++)
    {
        p = p * x;
        f = f * i;
        r = r + (p / f);
    }

    return r;
}

int main()
{
    printf("%f \n", eLoop(1, 10));

    return 0;
}