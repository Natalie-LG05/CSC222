#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char input[256];
        printf("$ ");
        fgets(input, 256, stdin);

        // look through the user input token by token
        char *token = strtok(input, " ");
        // if the first token is exit, then terminate
        if (strcmp(token, "exit\n") == 0) {
            break;
        }

        printf("Line read: %s", input);
        printf("Token(s):\n");

        int numTokens = 0;
        for (int i = 0; i < 256; i++) {
            if (token) {
                numTokens++;
                printf(" %s\n", token);
                token = strtok(NULL, " ");
            }
        }

        printf("%d token(s) read\n\n", numTokens);
    }
    
    return 0;
}