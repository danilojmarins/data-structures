#include <stdlib.h>
#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = { 10, 5 };
    struct Rectangle *p = &r;
    // static object created in stack

    p->length = 20; // accessing length property through pointer
    (*p).breadth = 10; // accessing breadth property through pointer
    // p.length or *p.length don't work

    printf("%d \n", p->length); // 20
    printf("%d \n", p->breadth); // 10




    struct Rectangle *pHeap;
    pHeap = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // C++ -> pHeap = new Rectangle
    // dynamic object created in Heap

    pHeap -> length = 10;
    pHeap -> breadth = 5;

    printf("%d \n", pHeap->length); // 10
    printf("%d \n", pHeap->breadth); // 5

    delete [ ] pHeap; // deleting from heap

    return 0;
}