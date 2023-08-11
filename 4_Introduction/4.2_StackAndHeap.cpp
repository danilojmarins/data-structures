// The main memory or the segment of the main memory
// where the program runs is divided in 3 parts:
// Code section, Stack and Heap.

// The Code section is where the program itself
// i.e the machine code is loaded so it can run.

// The Stack is where all the
// variables and functions that belongs to the program
// will be stored. If a function is called, a Stack Frame
// for this function will be created, storing any addresses
// for variables that this function may require. This is
// called Static Memory Allocation, because the number of
// bytes stored by the variables was decided at compile time.
// For sequencial function running, each function will be placed
// on top of the previous stack frame. The previous function
// will continue to execute only when the topmost stack frame
// returns or finish.

// Heap refers to unorganized memory. Heap memory should
// be treated as a resource. Use the memory when required
// and release the memory when required. Program can't
// directly access heap memory, only using pointers (address).
// The pointer is stored in stack, but it is pointing to an
// address on the heap. This is called Dynamic Memory Allocation
// because the request to allocate memory in heap occurs during
// runtime. Request to deallocation must also be made.