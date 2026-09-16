#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Arithmetic Operators
    - + for addition
    - - for subtraction
    - * for multiplication
    - / for division (int / int = int, but int / double = double)
    - % for mod
    */

    /* Logical Operators
    - && for logical AND
    - || for logical OR
    - !  for logical NOT
    */

    /* Conditionals */
    // 1 = true, 0 = false
    // true and false do not exist in C
    if (1) {
        printf("It was true!");
    }

    // if you want true to exist, use stdbool.h (#include <stdbool.h>)
    if (true && false) {
        printf("both were true");
    } else {
        printf("at least one was false");
    }

    if (true || false) {
        printf("at least one was true");
    } else if (false || false) {
        printf("this doesn't make sense...");
    } else {
        printf("f is for format");
    }

    if (false) printf("it was true!!!");  // same line if statement

    if (!false) {
        printf("do this");
    }

    /* Bitwise Operators
    - & bitwise and
    - | bitwise or
    - ~ bitwise not
    - ^ bitwise xor
    - >> right bit shift (Ex: x >> 2; // shift bits right 2 spots)
    - << left bit shift
    */

    unsigned int u = 10;  // in binary: 00000000 00000000 00000000 00001010
    unsigned int v = 15;  // in binary: 00000000 00000000 00000000 00001111

    unsigned int result1 = u & v;
    /*
        00000000 00000000 00000000 00001010
    &   00000000 00000000 00000000 00001111
    -----------------------------------------
        00000000 00000000 00000000 00001010 --> in decimal: 10
    */
    printf("result1: %u\n", result1);

    unsigned int result2 = u | v;
    /*
        00000000 00000000 00000000 00001010
    |   00000000 00000000 00000000 00001111
    -----------------------------------------
        00000000 00000000 00000000 00001111 --> in decimal: 15
    */
   printf("result1: %u\n", result2);

   unsigned int result3 = ~u;
    /*
    |   00000000 00000000 00000000 00001010
    -----------------------------------------
        11111111 11111111 11111111 00000101 --> in decimal: bit number
    */
   printf("result1: %u\n", result3);

   // shifts are very useful for multiplying and dividing by powers of two
    
    return 0;
}