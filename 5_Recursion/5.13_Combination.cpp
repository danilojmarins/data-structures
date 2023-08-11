// Calculate number of subsets encountered in a given
// set. Combination of terms of a set.

// Uses concepts of the pascal triangle. An element
// in the triangle is the sum of previous two elements.

#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || n == r) return 1;

    return combination(n - 1, r - 1) + combination(n - 1, r);
    // sum of two previou elements in pascal triangle
}

int main()
{
    printf("%d \n", combination(5, 3));

    return 0;
}