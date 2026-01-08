#include <stdio.h>

int main() {
    // a pointer is a reference to a memory location
    // use * when declaring them
    // must use data types with pointers
    // use & to get the memory address of some variable

    // Example:
    int num = 10;
    int *numPtr = &num;  // can read as "address of num"

    printf("Variable num: %d\n", num);
    printf("Variable numPtr: %p\n", numPtr);

    // You can use * to dereference a pointer
    // that is, you can get the value at that memory location instead of the memory location
    // The * here is called the indirection operator
    printf("Variable num: %d\n", *numPtr);
    printf("%lu\n", sizeof(numPtr));
    
    return 0;
}