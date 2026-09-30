#include <stdio.h>

int main(void) {
    printf("Enter a negative value at any point to quit.\n");

    while (1) {
        int num;

        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num < 0) break;

        int bits = sizeof(int) * 8;
        int hasFoundOne = 0;

        printf("Binary equivalent: ");
        for (int i = bits - 1; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (bit == 1) hasFoundOne = 1;
            if (hasFoundOne || i == 0) printf("%d", bit);
        }
        printf("\n");
    }

    printf("Bye\n");

    return 0;
}