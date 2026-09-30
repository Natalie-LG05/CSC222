#include <stdio.h>
#include <stdint.h>

int main() {
    // Integers
    // an int is 4 bytes
    // 4 bytes = 32 bits

    int w;  // declare
    int x = 10;  // declare and initialize
    int32_t y = 5;

    printf("The value of x is %d.\n", x);
    printf("The size of an int is %lu.\n", sizeof(int));

    // other ints
    // short int - 2 bytes
    short z = 4;
    int16_t q;

    // long int
    // typically 8 bytes (4 bytes on 32 bit machines)
    long e;
    int64_t a;

    // long long int
    // 8 byte int
    long long h;
    int64_t j;

    // the ints above are typically interpreted under a two's complement encoding (allowing for negative values)

    // unsigned ints
    unsigned int k;

    // Characters
    // size of a char is 1 byte
    // stores values from -128 to +127, so chars can be interpreted as an int
    // the values correspond to ASCII
    // format specifier is %c
    char aLetter = 'a';  // use single quote for char literals

    // unsigned char
    unsigned char anotherLetter;

    // Floats
    // size of a float is 4 bytes
    // floats use the IEEE 754 standard of 32-bits
    // 8 bits for your exponent, 1 bit for sign, 23 bits for the mantissa
    float b = 12.12345;  // literal defaults to double but auto casts to a float in this case

    // Doubles
    // doubles are 8 bytes (64 bits)
    // IEEE 754 standard values
    // 11 bits for the exponent, 1 bit for the sign, 54 bits for the mantissa
    double m = 12.1234567890;

    return 0;
}