#include <stdio.h>
#include <stdlib.h>

int main() {
    int numItems;

    // prompt the user for info
    printf("how many items do you want in the array? ");
    scanf("%d", &numItems);  // don't take integral input, instead take it as a string then check it and cast it

    // an array of integers
    int *values = (int*) malloc(sizeof(int) * numItems);

    // calloc is similar, but the args are different
    // calloc handles the multiplication for you
    // note that calloc clears the allocated memory for you
    int *values2 = (int*) calloc(sizeof(int), numItems);

    // print values
    for (int i = 0; i < numItems; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    // add some values to `values`
    for (int i = 0; i < numItems; i++) {
        int val;
        printf("Give me half the value for the %dth item ", i);
        scanf("%d", &val);
        values[i] = val * 2;
    }

    // print values
    for (int i = 0; i < numItems; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
    
    return 0;
}