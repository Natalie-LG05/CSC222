#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // contains kill()
#include <signal.h>  // contains signal macros (SIGKILL, SIGTERM, other)
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // child process
        while (1) {
            printf("Child is running...\n");
            sleep(2);
        }
        exit(0);
    }

    // parent process
    // let the child do its thing for a little bit
    sleep(5);

    printf("sending SIGTERM to child");

    // kill is used to send signals (not just to kill programs)
    // use the process id you want to send the signal to
    // and use the signal
    kill(pid, SIGTERM);

    // wait for child to terminate
    wait(NULL);
    printf("Child has terminated");

    exit(0);
}