#include <stdio.h>

int main() {
    while (1) {
        char input[256];
        printf("$ ");
        fgets(input, 256, stdin);
        printf("%s\n", input);
    }
    
    return 0;
}