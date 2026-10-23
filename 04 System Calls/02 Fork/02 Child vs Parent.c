#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>  // contains the pid_t type def
#include <sys/wait.h>

int main() {
    int pid = fork();

    // if pid is -1, then fork failed to create the child (there was an error)
    if (pid < 0) {
        printf("Failed to creat child process\n");
        return 1;
    }

    // When fork() returns in the child process the return value is 0
    if (pid == 0) {
        printf("This is the child process\n");
        printf("pid in child: %d\n", pid);
        printf("From child: id of child: %d\n", getpid());
        printf("From child: id of parent: %d\n", getppid());
    }

    // When fork() returns in the parent process, it returns a positive value;
    // that positive number is the pid of the child process
    else {
        printf("Hi from the parent process.\n");
        printf("From parent: child id is %d\n", pid);
        printf("From parent: parent id: %d\n", getpid());
        wait(NULL);
    }

    // this is in both processes
    printf("hi from both (%d)\n", pid);

    return 0;
}