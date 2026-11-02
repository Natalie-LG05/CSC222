#include <stdio.h>
#include <unistd.h>  // contains fork() and pipe()

int main() {
    // the value at fd[0] is used for the read end of the pipe
    // the value at fd[1] is used for the write end of the pipe
    int fd[2];
    pipe(fd);  // provide the file descriptor array reference

    // good practice to check for an error (pipe returns -1 if errored)

    pid_t pid = fork();

    if (pid == 0) {
        // child - will write to pipe here in this example
        // close the read end of the pipe
        close(fd[0]);

        // prompt
        int x;
        printf("(child) Integer: ");
        scanf("%d", &x);

        // write data
        write(fd[1], &x, sizeof(int));  // check for errors (returns -1)
        close(fd[1]);
    } else {
        // parent - will read from the pipe here in this example

        // close the write end of the pipe
        close(fd[1]);

        // read from the pipe
        int y;
        read(fd[0], &y, sizeof(int));  // check for errors (returns -1)
        printf("(parent) Received form child: %d\n", y);

        // close the read end
        close(fd[0]);
    }

    return 0;
}