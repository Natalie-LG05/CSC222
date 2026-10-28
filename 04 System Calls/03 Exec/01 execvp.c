#include <unistd.h>
#include <stdio.h>

int main() {
    char *args[] = {
        "ls",
        "-l",
        NULL  // can provide additional nulls if needed (such as to fill a large array)
    };

    execvp(args[0], args);

    // execvp takes over the process
    // so this won't print if successful
    printf("this doesn't print\n");

    return 0;
}