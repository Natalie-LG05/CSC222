#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc - 1  < 2) printf("Must provide at least 2 arguments.");
    else if (argc - 1 > 6) printf("Must provide at most 6 arguments.");
    else {
        for (int i = 0; i < argc; i++) {
            if (i % 2 == 0) {
                printf("%c ", argv[i][1]);
            } else {
                printf("%c ", argv[i][0]);
            }
        }

        printf("\n");
    }

    return 0;
}