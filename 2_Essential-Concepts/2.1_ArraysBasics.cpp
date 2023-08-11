#include<iostream>

using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10}; // declaration and initialization of array

    for (int i = 0; i < 5; i++) // for loop
    {
        printf("%d\n", A[i]);
    }

    for(int x:A) // for each loop
    {
        printf("%d\n", x);
    }

    return 0;
}