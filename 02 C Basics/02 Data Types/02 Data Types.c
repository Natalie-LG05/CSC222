#include <stdio.h>
#include <stdint.h>

int main() {
    // int
    // an int is 4 bytes
    // 4 bytes = 32 bits

    int w;  // declare
    int x = 10;  // declare and initialize
    int32_t y = 5;

    printf("The value of x is %d.\n", x);
    printf("The size of an int is %lu.\n", sizeof(int));

    return 0;
}