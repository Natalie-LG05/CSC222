#include <sys/syscall.h>  // some helpful constants

int main() {
    // write
    syscall(
      1,  // value for rax for write
      1,  // a 1 for stdout
      "hello\n",  // the message
      6  // the message is 6 bytes
    );

    // exit
    syscall(
        60,  // syscall for exit
        0  // exit code
    );
}