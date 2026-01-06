#include <stdio.h>
#include <stdint.h>  // needed for int typedefs

int main() {
    // int (for integer)
    /*
    multiline comment
    */
    // An int is typically 4 bytes (32 bits)
    int x0;
    int x1 = 10;
    int x2 = -10;  // int is signed using two's comp

    int32_t x3 = 20;  // some machines may have different sizes for normal data types

    printf("x1 = %d; x2 = %d", x1, x2);
    printf("Size of int is %lu bytes\n", sizeof(int));  // get the size of a data type
    printf("Size of x2 is %lu bytes\n", sizeof(x2));  // get the size of a variable
    printf("Size of int32_t is %lu bytes\n", sizeof(int32_t));

    // short
    // short integer is only 16 bits
    short y = 10;
    int16_t y2 = 10;

    printf("Size of short is %lu bytes\n", sizeof(short));
    printf("Size of int16_t is %lu bytes\n", sizeof(int16_t));

    // long
    // long integer is typically 8 bytes, but sometimes 4 (such as on Windows)
    long z = 10;
    int64_t z2 = 10;

    // %ld is likely signed long, %lu is likely unsigned long
    printf("Size of long is %lu bytes\n", sizeof(long));
    printf("Size of int64_t is %lu bytes\n", sizeof(int64_t));

    // long long int
    // long longs are typically 8 bytes (64 bits)
    long long int a = 10;
    // could use int64_t
    printf("The value of a is %lld\n", a);

    // use the word unsigned for unsigned values
    unsigned int b1 = 10;
    unsigned int b2 = -10;

    printf("b1 = %u\n", b1);
    printf("b2 = %u\n", b2);

    return 0;
}