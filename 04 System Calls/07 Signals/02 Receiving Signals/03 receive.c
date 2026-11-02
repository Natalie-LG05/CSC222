#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

void handleSignal(int sig) {
    printf("Received %d: %s\n", sig, strsignal(sig));
}

int main() {
    printf("Receiver PID: %d\n", getpid());

    // register the handler func as a handler for SIGUSR1
    signal(SIGUSR1, handleSignal);

    printf("Waiting...\n");
    while (1) {
        pause();
    }

    return 0;
}