#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    // bit encoded integer that will hold info about
    // - how the process exited
    // - what the exit code was
    // - ex: did it terminate by a signal? which signal?
    // - ex: did the process totally stop? did it continue from a stopped state?
    int status;

    pid_t pid = fork();
    if (pid < 0) {
        perror("The fork() call failed");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // Child Process
        printf("Child process id: %d\n", getpid());
        sleep(2);  // wait for 2 seconds
        exit(3);  // exiting with 3 for no reason
    } else {
        // Parent Process
        printf("Waiting on child: %d\n", pid);

        /*
        waitpid() takes in:
            - a process id
                -1 for ANY child of the calling process
                0 for any child in the same process group as the calling process
                >0 for a specific process
            - a pointer for where to store status info
            - options for the last arg:
                0 is most commonly used (no option)
                WNOHANG - doesn't block parent/causes waitpid to return immediately
                WUNTRACED - causes waitpid to return if a child is stopped
                WCONTINUED - causes waitpid to return if a stopped child is resumed

        waitpid() returns:
            -1 for an error
            0 for when WNOHANG is used and the child didn't change state
            >0 pid of child whose state changed
        */
        pid_t waited = waitpid(pid, &status, 0);
        // note: wait(&status) is equivalent to waitpid(-1, &status, 0)
        // note: we have: wait for child with process id pid to change state

        if (waited == -1) {
            perror("waitpid failed");
            exit(EXIT_FAILURE);
        }

        // extracting status info
        if (WIFEXITED(status)) {
            // child exits normally
            printf("Child exited with status %d\n", WEXITSTATUS(status));

            // look at the hex of the status
            printf("status var: %#x\n", status);
        } else if (WIFSIGNALED(status)) {
            // child is killed by a signal

            // use strsignal(WTERMSIG(status)) for human readable signal
            printf("Child was killed by signal %d\n", WTERMSIG(status));
        }
    }
}