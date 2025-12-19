

# Standard Output Redirect
- idea: takes the normal output of a program and stores it in a file
- abbreviated with stdout
- redirected with > symbol
- we can append with >> symbol
- note that this is the same as 1> or 1>>

Ex: echo "josh" > name.txt
Ex: echo "gage" >> name.txt

# Standard Input Redirect
- idea: feed info into a program that takes input
- abbreviated with stdin
- redirect symbol is <

Ex: python 3 greeting.py < names.txt

# Standard Error Redirect
- idea: feed the error messages into a file
- abbreviated with stderr
- redirect symbol is 2> or 2>> for appending

Ex: echoo "josh" 2> errors.txt
Note: echoo isn't a command so the error ends up in errors.txt

# Pipe
- idea: Take one program's result and feed it into another program
- used to string programs together

Ex: ls -al /usr/bin | more