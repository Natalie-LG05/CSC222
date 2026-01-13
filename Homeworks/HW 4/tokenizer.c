#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char input[256];
        printf("$ ");
        fgets(input, 256, stdin);

        char *tokensPointer = strtok(input, " ");
        for (int i = 0; i < 15; i++) {
            char token[] = strtok(NULL, " ");
            if (token) {
                printf("%s\n", token);
            }
        }

        if (strcmp(input, "exit") == 0) {
            break;
        }
        
        printf("Line read: %s", input);
        printf("Token(s):\n");
    }
    
    return 0;
}