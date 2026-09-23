### Redirection
#### Standard Output Redirect
```
- idea: take the output of a command and pass it into a file
- standard output is often abbreviated `stdout`
- to redirect we use `>` or `>>`
- note `>` is shorthand for `1>`
- the single `>` will override the contents of an existing file
- the double `>>` will append to the contents of an existing file
```

#### Standard Input Redirection
```
- idea: provide input into a program viaa the command line
- standard input is often abbreviated `stdin`
- symbols used are `<`
```

#### Standard Error
```
- idea: if an error is produced, you redirect it
- standard error is often abbreviated `stderr`
- use `2>` for standard error redirection
- or use `2>>` to append to the target file instead of overriding its contents
```

#### Pipe
```
- idea: take the output of one program and pass it into another as input
- pipe as in pipeline (connecting two programs via a pipeline)
- use `|` to pipe: e.g. `ls /usr/bin | less`
```