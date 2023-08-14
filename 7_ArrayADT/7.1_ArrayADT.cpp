// An ADT (Abstract Data Type) can be defined by the properties
// and operations that can be performed on certain data type.
// This file is going to define an ADT for Array. Some operations
// performed on arrays will be created, like: display(), insert(),
// delete(), add(), get(), set(), reverse(), shift(), rotate().

#include <stdio.h>

struct Array
{
    int *A;
    int length;
};

void IncreaseLength(struct Array *arr)
{
    int *t = new int[arr->length + 1];

    for (int i = 0; i < arr->length; i++)
    {
        t[i] = arr->A[i];
    }

    delete []arr->A;
    arr->A = t;

    arr->length++;
}

void DecreaseLength(struct Array *arr)
{
    int *t = new int[arr->length - 1];

    for (int i = 0; i < arr->length - 1; i++)
    {
        t[i] = arr->A[i];
    }

    delete []arr->A;
    arr->A = t;
    
    arr->length--;
}

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int Get(struct Array *arr, int index)
{
    return arr->A[index];
}

void Set(struct Array *arr, int index, int value)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = value;
    }
}

void Append(struct Array *arr, int value)
{
    IncreaseLength(arr);
    arr->A[arr->length - 1] = value;
}

void Insert(struct Array *arr, int index, int value)
{
    if (index >= 0 && index < arr->length)
    {
        IncreaseLength(arr);

        for (int i = arr->length - 1; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }

        arr->A[index] = value;
    }
}

void Delete(struct Array *arr, int index)
{
    if (index >= 0 && index < arr->length)
    {
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }

        DecreaseLength(arr);
    }
}

int main()
{
    struct Array arr;

    printf("\nEnter length of Array: \n");
    scanf("%d", &arr.length);

    arr.A = new int[arr.length];

    printf("\nEnter each element: \n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    Append(&arr, 12);
    Insert(&arr, 2, 5);
    Delete(&arr, 5);
    Display(arr);
    Set(&arr, 2, 8);

    printf("\n%d \n", Get(&arr, 2));

    return 0;
}