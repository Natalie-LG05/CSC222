#include <unistd.h>  // syscall() in here
#include <sys/syscall.h>  // some helpful constants

int main() {
    // write
    syscall(
      SYS_write,  // value for rax for write (1)
      1,  // a 1 for stdout
      "hello\n",  // the message
      6  // the message is 6 bytes
    );

    // exit
    syscall(
        SYS_exit,  // syscall for exit (60)
        0  // exit code
    );
}