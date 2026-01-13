/*
Homework 4: Tokenizer in C
Name: Natalie Gates
Class: CSC-222
Date: 01-13-2026
*/

#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char input[256];
        printf("$ ");
        fgets(input, sizeof(input), stdin);

        // make a copy of the full input string for later use, since strtok() changes the original string
        char input2[sizeof(input)];
        strcpy(&input2, input);

        // look through the user input token by token
        char *token = strtok(input, " ");
        // if the first token is exit, then terminate
        if (strcmp(token, "exit\n") == 0) {
            break;
        }

        printf("Line read: %s", input2);
        printf("Token(s):\n");

        int numTokens = 0;
        for (int i = 0; i < sizeof(input2); i++) {
            numTokens++;
            printf(" %s", token);
            token = strtok(NULL, " ");

            // the input will have a leading newline, so this avoids printing an extra newline after the last token
            if (token) {
                printf("\n");
            } else {
                break;
            }
        }

        printf("%d token(s) read\n\n", numTokens);
    }
    
    return 0;
}