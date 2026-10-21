#include <unistd.h>  // write() wrapper function is here
#include <stdlib.h>  // contains exit()

int main() {
    write(
        1,  // for stdout
        "hello\n",
        6  // bytes
    );

    exit(0);
}