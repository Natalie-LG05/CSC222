#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    // Run receive.c first
    // run ./send [target pid] when running this to send the signal

    if (argc != 2) {
        // another way of printing an error
        fprintf(stderr, "Usage: %s <receiver-pid>\n", argv[0]);
        exit(1);
    }

    pid_t targetProcess = atoi(argv[1]);

    printf("Sender: sending SIGUSR1 to PID %lld\n", targetProcess);
    kill(targetProcess, SIGUSR1);

    return 0;
}