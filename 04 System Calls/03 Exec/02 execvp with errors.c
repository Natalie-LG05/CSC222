#include <unistd.h>  // exec funcs live here
#include <stdio.h>  // includes perror()
#include <errno.h>  // contains the errno variable (error number)
#include <string.h>  // contains strerror() func

int main() {
    char *args1[] = {
        "ls",
        "-l"  // left NULL off which will cause an error
    };

    char *args2[] = {
        "lkdsafjealghlsdf;j",  // not a valid executable
        "-dasfea",
        NULL
    };

    execvp(args2[0], args1);

    // perror prints the error and you can easily add your own message
    // newline is already included
    perror("Uh Oh");

    // note use errno to see the error number
    printf("Error %d: %s\n", errno, strerror(errno));
}