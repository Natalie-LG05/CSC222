#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    // arithmetic operators
    /*

    + addition
    - subtraction
    * multiplication
    / division (int div if two ints)
    % mod
    
    */

    // logical operators
    /*
    Note: logical results that are true are stored 0x01 and logical results that are false are stored as 0x00

    && logical and
    || logical or
    !  logical not

    */

    // note: booleans like true and false don't exist by default; must #include <stdbool.h>
    if (1 && 1) {
        // result is true
    }

    // example of else
    if (1 && 0) {
        // result is false
    } else {
        // result is true
    }

    // example of else if
    if (1 || 0) {
        // result is true
    } else if ( true || false) {
        // doesn't reach this point, but result would be true
    }

    // Bitwise Operators
    /*
    
    &  bitwise AND
    |  bitwise OR
    ~  bitwise flip (aka not or complement)
    ^  bitwise XOR
    >> right shift
    << left shift
    
    */

    // Example of bitwise AND
    int x = 10;
    int y = 15;
    /*
    
    x:     00000000 00000000 00000000 00001010
    y:     00000000 00000000 00000000 00001111
    &
    -------------------------------------------
           00000000 00000000 00000000 00001010

    therefore x & y = x
    That is, 10 & 15 = 10
    But, 10 && 15 = 0x01 (true)

    */

    // Example of bitwise OR
    x = 10;
    y = 15;
    /*
    
    x:     00000000 00000000 00000000 00001010
    y:     00000000 00000000 00000000 00001111
    |
    -------------------------------------------
           00000000 00000000 00000000 00001111
    
    therefore 10 | 15 = 15
    But, 10 || 15 = 0x01 (true)
           
    */

    // Example of bitwise XOR
    x = 10;
    y = 15;
    /*
    
    x:     00000000 00000000 00000000 00001010
    y:     00000000 00000000 00000000 00001111
    ^
    -------------------------------------------
           00000000 00000000 00000000 00000101
           
    */

    // Bitshitfs
    /*

    x >> 2 (shift the bits 2 places to the right)
    Start:  00000000 00000000 00000000 00001010
    Result: 00000000 00000000 00000000 00000010

    x << 4 (shift the bits to the left 4 places)
    Start:  00000000 00000000 00000000 00001010
    Result: 00000000 00000000 00000000 10100000

    int z = -10

    maintain the sign by adding on 1s at the beginning instead of 0s
    z >> 2
    Start:  11111111 11111111 11111111 11110110
    Result: 11111111 11111111 11111111 11111101

    Conversion to decimal:
    00000000 00000000 00000000 00000011

    The result in decimal is: -3

    ~x
    Start:  00000000 00000000 00000000 00001010
    Result: 11111111 11111111 11111111 11110101
    
    */

    // Note: the bit shift operator is very useful for your machine when you're calculating products of two 
    // The reverse is true also (division by powers of 2)

    // use pow() function from math.h to test powers of 2
    
    return 0;
}