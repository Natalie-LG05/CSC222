## Chaining Commands  
AND  
```sh
# command2 only happens if command1 is successful
command1 && command2
```

OR  
```sh
# if command1 fails, then command2 executes
command 1 || command2
```

Combining Lines
```sh
# use a ;
command; command; command;
```