#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

// functional prototyping
void getChecksum(char* filepath, char* outputAddress);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: ./question2 <source_file> <destination_file>\n");
        return 0;
    }

    char *sourceFilepath = argv[1];
    char *destinationFilepath = argv[2];

    FILE *sourceFile = fopen(sourceFilepath, "rb");
    FILE *destinationFile = fopen(destinationFilepath, "wb");

    int data = fgetc(sourceFile);
    while (data != EOF) {
        fputc(data, destinationFile);
        data = fgetc(sourceFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("Files copied successfully.\n");

    // call md5sum command to get the checksum of the source file
    char checksum[33];  // check sum will be a 32 character string
    getChecksum(sourceFilepath, checksum);
    printf("MD5 (%s) = %s\n", sourceFilepath, checksum);

    // call md5sum command to get the checksum of the destination file
    getChecksum(destinationFilepath, checksum);
    printf("MD5 (%s) = %s\n", destinationFilepath, checksum);
}

void getChecksum(char* filepath, char* outputAddress) {
    int pipefd[2];
    pipe(pipefd);  // create a pipe to get data out of the child process
    pid_t pid = fork();
    if (pid == 0) {
        // child process
        close(pipefd[0]);  // close the read end of the pipe as we do not need it here
        dup2(pipefd[1], STDOUT_FILENO);  // have stdout redirect to the pipe
        close(pipefd[1]);  // close the write end of the pipe as we are done with it
        char *args[] = {
            "md5sum",
            filepath,
            NULL,
        };
        execvp(args[0], args);  // run the md5sum command which should output the file's checksum to stdout
        return;  // in case exec fails I am making this return to ensure the child doesn't run any code below
    }

    waitpid(pid, NULL, 0);
    close(pipefd[1]);  // close the write end of the pipe as we do not need it here
    FILE *pipeStream = fdopen(pipefd[0], "r");  // access the pipe's read end as if it is a file
    close(pipefd[0]);  // close the read end of the pipe as we are done with it

    fscanf(pipeStream, "%32s", outputAddress);  // get the checksum from the pipe stream
    fclose(pipeStream);
}