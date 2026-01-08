#include <stdio.h>

int main() {
    printf("Enter a negative value at any point to quit.");
    while (1) {
        int input;
        printf("Enter the number of seconds to convert: ");
        scanf("%d", &input);

        if (input < 0) break;

        printf("%d", input);
    }
    
    return 0;
}