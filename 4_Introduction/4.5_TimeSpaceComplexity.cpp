// The time and space complexity are defined by the
// procedure used to complete a task. A certain procedure
// may take more time to complete a task than other procedure.

// If a task need to go through an entire list of elements
// with size n, than this task takes O(n) amount of time
// to be completed. The total time is always measured in
// terms of a polinomial degree.

// If a task need to go through an entire list of elements
// with size n, for each element (loop inside loop).
// Like comparing one element to all the others
// for a sorting algorithm, than the total
// time for it's completion is represented by O(n²).

// In binary searchs, the total time is represented by O(log n)
// for each comparison, the total of elements is divided by
// 2, resulting in a base 2 log.

int sum(int A[], int n) // O(n)
{
    int s, i;
    s = 0;

    for (i = 0; i < n; i++)
    {
        s = s + A[i];
    }

    return s;
}

void Add(int n) // O(n²)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // instruction
        }
    }
}

void swap(int x, int y) // O(1) - constant
{
    int t;

    t = x;
    x = y;
    y = t;
}