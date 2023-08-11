// The same array can not be resized directly, because
// the address of each element must be contiguous. For
// resizing an array, another array must be created in
// heap and the pointer of first array must point to new
// array.

#include <stdio.h>

int main()
{
    int *p = new int[5];
    
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;

    int *q = new int[6];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete []p;
    p = q;

    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", p[i]);
    }

    return 0;
}