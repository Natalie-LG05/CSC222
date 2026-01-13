#include <stdio.h>
#include <stdlib.h>

int main() {
    int numItems;

    // prompt the user for info
    printf("how many items do you want in the array? ");
    scanf("%d", &numItems);  // don't take integral input

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
    
    return 0;
}