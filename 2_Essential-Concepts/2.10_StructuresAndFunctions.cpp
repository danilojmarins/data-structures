// Example of best practice program in C language
// using structures and functions, making the best
// use of a modular programming technique

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b) // pass by address
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r) // pass by value
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int l) // pass by address
{
    r->length = l;
}

int main()
{
    struct Rectangle r;

    initialize(&r, 10, 5);  // passing address
    area(r);                // passing value
    changeLength(&r, 20);   // passing address

    return 0;
}