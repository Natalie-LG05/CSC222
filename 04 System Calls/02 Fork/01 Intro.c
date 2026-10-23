#include <stdio.h>
#include <unistd.h>  // fork in here

int main() {
    // this section of code is only in the parent process
    printf("This is the og process (aka the parent)\n");

    fork();  // fork creates a child process

    // Everything from here on is in both the parent and child process
    printf("Child and parent\n");

    return 0;
}