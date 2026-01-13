#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char input[256];
        printf("$ ");
        fgets(input, 256, stdin);

        if (strcmp(input, "exit")) {
            break;
        }
        
        printf("Line read: %s", input);
        printf("Token(s):\n");
    }
    
    return 0;
}