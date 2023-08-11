// In C the size of an array can only be defined at compile
// time, in C++ the size can be defined at run time.
// The array can be stored either inside Stack or Heap.
// The same array can never be resized, but there is a 
// workaround for arrays allocated in Heap.

int main()
{
    int A[5]; // array stored in stack
    int *P; // pointer to array in heap

    P = new int[5]; // array stored in heap

    delete [] P; // deallocation - prevent memory leak

    return 0;
}