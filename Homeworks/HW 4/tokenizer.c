#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char input[256];
        printf("$ ");
        fgets(input, 256, stdin);

        char *token = strtok(input, " ");
        if (strcmp(token, "exit") == 0) {
            break;
        }

        for (int i = 0; i < 15; i++) {
            if (token) {
                printf("%s\n", token);
                token = strtok(NULL, " ");
            }
        }
        
        printf("Line read: %s", input);
        printf("Token(s):\n");
    }
    
    return 0;
}