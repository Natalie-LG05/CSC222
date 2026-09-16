

## File Permissions  
To see permissions, we use `ls -l [file]`  
The ten char string on the left is the permission string  

Ex: -rw-rw-r--  

Char 1:      -       indicates the file type, here we have a normal file  

Char 2,3,4:  rw-     permissions for user that owns the file  
                     here we have read, write, but not execute perms  

Char 5,6,7:  rw-     permissions for group that owns the file   
                     here we have read, write, but not execute perms  

Char 8,9,10: r--     permissions for the other users on the machine  
                     here we have read perms  

Options for Char 1:  
- \- for normal files  
- d for directories  
- l for links (aka shortcuts in windows)  
- ... there are more  

Octal Permission Values:  
    r = 4  
    w = 2  
    x = 1  

```
Ex: -   rw-            rw-          r--
        4+2 = 6        4+2 = 6      4
Octal Perm is 664

Ex: -   rwx            --x          -wx
        7              1            3
Octal Perm is 713 
``` 

The default is 664

### The Change Mode Command (chmod)  
Key:  
```
u = user who owns the file
g = group that owns the file
o = all other users
a = all users (all three groups at once)

Ex: chmod u+w file.txt
Ex: chmod g-x file.txt
Ex: chmod uo-x file.txt
Ex: chmod u-x+r file.txt
Ex: chmod 755 file.txt
Ex: chmod 664 file.txt
Ex: chmod 000 file.txt
```

### chown command  
```
sudo chown [newowner] [filename]  
sudo chown :[newgroupowner] [filename]  
sudo chown [newowner] :[newgroupowner] [filename]  
```

Adding new groups:  
groupadd is a command  

Adding new users:  
useradd  
adduser  