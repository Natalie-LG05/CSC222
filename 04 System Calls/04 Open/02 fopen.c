#include <stdio.h>  // includes fopen()

int main () {
    char fileContents[100];  // 100 bytes buffer
    FILE *filePtr = fopen("hello.txt", "r");

    // check for error
    if (filePtr == NULL) {
        perror("not good");
        return 1;
    }

    // file get string
    while (fgets(fileContents, 100, filePtr)) {
        printf("%s", fileContents);
    }

    // close the file
    fclose(filePtr);

    return 0;
}