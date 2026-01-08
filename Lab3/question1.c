#include <stdio.h>

int main(int argc, char *argv[]) {    
    if ((argc - 1) < 2) {
        printf("Must provide at least 2 arguments.\n");
    } else if ((argc - 1) > 6) {
        printf("Must provide at most 6 arguments.\n");
    } else {
        for (int i = 1; i < (argc - 1); i++) {
            if (i % 2 == 1) printf("%c ", argv[i][0]);  // print the 1st character of odd arguments
            else printf("%c ", argv[i][1]);  // print the 2nd character of even arguments
        }
        printf("\n");  // add a newline to the end of the line printed by the preceding for loop
    }
    
    return 0;
}