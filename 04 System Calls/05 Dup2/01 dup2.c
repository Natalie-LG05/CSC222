#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd < 0) {
        perror("The open() func caused an error on line 6.");
        return 1;
    }

    // dup2 here redirects standard output to output.txt
    // we are reassigning the file descriptor for standard output from one to fd
    // anything going to standard output will go to the new file instead
    dup2(fd, STDOUT_FILENO);

    // dup() is also a function
    // dup() takes a file descriptor and creates a new one (i.e. duplicates)

    close(fd);

    printf("These are the contents of the file.");

    return 0;
}