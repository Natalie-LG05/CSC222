#include <stdio.h>

int main() {
    printf("Enter a negative value at any point to quit.\n");
    while (1) {
        int num;
        printf("Enter a non-negative integer: ");
        scanf("%d", &num);

        // Exit if a negative number is entered
        if (num < 0) break;

        // Output the given number's binary representation using bitwise operators
        int num_bits = sizeof(num) * 8;
        for (int i = (num_bits-1); i >= 0; i--) {
            printf("%d", (num>>i)&1);
        }
        printf("\n");
    }
    
    printf("Bye\n");
    return 0;
}