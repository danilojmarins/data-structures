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

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }

    return -1;
}

void Set(struct Array *arr, int index, int value)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = value;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }

    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }

    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;

    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }

    return sum;
}

float Average(struct Array arr)
{
    return Sum(arr) / arr.length;
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

void Swap(struct Array *arr, int index1, int index2)
{
    if (index1 >= 0 && index1 < arr->length)
    {
        if (index2 >= 0 && index2 < arr->length)
        {
            int temp = arr->A[index1];
            arr->A[index1] = arr->A[index2];
            arr->A[index2] = temp;
        }
    }
}

int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            Swap(arr, i, 0); // improve performance for further searches
            return 0;
        }
    }

    return -1;
}

int BinarySearch(struct Array *arr, int key)
{
    int low = 0;
    int high = arr->length - 1;
    int mid = (high + low) / 2;

    while (low <= high)
    {
        if (arr->A[mid] == key)
        {
            return mid;
        }

        else if (arr->A[mid] > key)
        {
            high = mid - 1;
            mid = (high + low) / 2;
        }

        else if (arr->A[mid] < key)
        {
            low = mid + 1;
            mid = (high + low) / 2;
        }
    }
    
    return -1;
}

void Reverse(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        Swap(arr, i, j);
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

    //printf("\n%d \n", LinearSearch(&arr, 3));
    //printf("\n%d \n", BinarySearch(&arr, 3));

    //printf("\n%d \n", Max(arr));

    Display(arr);

    Reverse(&arr);

    Display(arr);

    return 0;
}