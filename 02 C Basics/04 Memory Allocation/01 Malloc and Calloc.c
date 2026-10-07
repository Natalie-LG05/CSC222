#include <stdlib.h>  // malloc, calloc, free, and realloc
#include <stdio.h>

int main() {
    int numItems;

    // prompt user for number of items
    printf("How many items do you want in the array? ");
    scanf("%d", &numItems);

    // malloc take in the number of bytes needed for the thing you're creating
    // we typically cast the return type to the appropriate pointer type
    // casting is required in c++
    int *values = (int *) malloc(sizeof(int) * numItems);

    // see what is in the array?
    // did it zero out everything?
    // note: on Windows malloc() doesn't
    for (int i = 0; i < numItems; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    // calloc takes in the number of items and the size of each item
    // calloc clears the reserved memory locations
    int *values2 = (int *) calloc(numItems, sizeof(int));

    for (int i = 0; i < numItems; i++) {
        printf("%d ", values2[i]);
    }
    printf("\n");

    // assign some values to the values array
    for (int i = 0; i < numItems; i++) {
        // create ref

        int val;
        // prompt for value

        printf("Give me a value: ");
        scanf("%d", &val);

        // assign value in array
        values[i] = val * 2;
    }

    // look at contents of the "values" array
    for (int i = 0; i < numItems; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    // free up memory
    // doesn't guarantee clearing (zeroing it out)
    // the os might zero it out as a security feature
    free(values);
    free(values2);

    // look at contents of the "values" array again
    for (int i = 0; i < numItems; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}