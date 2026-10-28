## The Exec Family of Functions  
- These functions execute programs.  
- These functions take over the process.  
- That is, anything you program after a call to an exec will not happen as exec takes over the process.  
- The solution is to call fork first to create a new process for exec to take over.  

### The execl functions  
- The l stands for list (or really, list it all out)

1. execl
```c
// format
execl(char *path, char arg0, char arg1, char *arg1, ..., NULL)
```
- loads and runs an executable based on the path to the executable
- arg0 is the name of the executable
- arg1 through your last arg will be other args you provide to the executable
- NULL is the last arg to signal that you're done providing args
- returns -1 if there is an error
```c
// example
execl("/bin/ls", "ls", "-al", "-h", NULL);
```

2. execlp
- p for path
- it means exec will use the path environment variable to find the executable; thus your first arg isn't the path, but just the executable's name
- same arguments as execl, except the first arg is just the name instead of the path (so the name will be provided twice)
- uses your path environment variable
```c
// example
execlp("ls", "ls", "-al", "-h", NULL);
```

3. execle
- e stands for environment
- You can pass in custom environment variables
```c
// format
execle(char *executable, char *arg0, ..., NULL, char *envp[])
```

### The execv functions  
- The v stands for vector (i.e. an array)

1. execv
```c
// format
execv(char *pathToExecutable, char *args[])
```
- The array of strings, *args[], starts with the executable name and includes any arguments and ends with NULL.

2. execvp

- uses the path environment variable to find the executable
```c
// format
execvp(char *executable, char*args[])
```

3. execvpe

- can pass in environment variables as well as args

```c
// format
execvpe(char *executable, char *args[], char *envp[])

// example of envp[] array of strings
char *envp[] = {
      "PATH=/bin:/usr/bin",
      "LANG-C",
      NULL  // must be NULL terminated  
    };
```