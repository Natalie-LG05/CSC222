#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./question1 <executable>\n");
        return 0;
    }

    int pid = fork();

    if (pid < 0) {
        perror("The fork() call failed\n");
        return 1;
    }

    if (pid == 0) {
        // in child process
        printf("Child %d:\n", getpid());

        // execute the provided executable
        char *args[] = {argv[1], NULL};
        execv(argv[1], args);
    }
}