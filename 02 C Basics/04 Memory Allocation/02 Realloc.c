#include <stdio.h>  // printf
#include <stdlib.h> // contains realloc

void append(int *array, int *arrayLength, int newValue) {
    // add to the array length
    *arrayLength = *arrayLength + 1;

    // using realloc to add more space in the array
    // pass in pointer for old array
    // pass in the value for the length (dereferencing)
    int *array2 = realloc(array, *arrayLength);

    // reset the identifier for array2 to just be array
    array = array2;

    // assign the new value to the last spot in the array
    array[*arrayLength - 1] = newValue;
}

int main() {
    int length = 1;
    int *array = malloc(sizeof(int) * length);

    // assign a value to the single spot in the array
    array[0] = 21;

    append(array, &length, 10);
    append(array, &length, 20);

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}