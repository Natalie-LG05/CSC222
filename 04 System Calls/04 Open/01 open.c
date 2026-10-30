#include <fcntl.h>  // file control (contains constants)
#include <unistd.h>  // contains open
#include <stdio.h>

int main() {
    /*
    Open creates a file descriptor for us (the return value)
    If -1 is returned, then open had an error
    Usually, 3 is the first available (unless you've already called open)
    Existing file descriptors in your process are:
        * 0 for stdin
        * 1 for stdout
        * 2 for stderr

    We provide the name of the file we want to open (hello.txt here)
    We provide our options:
        * O_WRONLY - open and edit (write only)
        * O_CREAT  - creates the file if it doesn't exist
        * O_TRUNC  - erase the contents if the file already exists
        * O_APPEND - for appending contents instead of truncating

    And then we provide our octal file permissions (ex: 0644)
    */
    int fd = open("hello.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // Look at the file descriptor value
    printf("File Descriptor: %d\n", fd);

    // good practice for catching errors
    if (fd < 0) {
        perror("Error with open() function");
        return 1;
    }

    const char msg[] = "These are the contents.\n";

    // sizeof(msg) includes the null terminator that is automatically added to string literals
    // in C when we assign them to variables, therefore subtract 1 to not include it
    write(fd, msg, sizeof(msg) - 1);

    // close the file
    close(fd);

    return 0;
}