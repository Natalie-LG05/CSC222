#!/bin/bash

filename="hello world.txt"

## some flags for checking on files/directories
# check for existence of file or directory
[[ -e $filename ]]

# check for a "regular file"
[[ -f $filename ]]

# check for a readable file
[[ -r $filename ]]

# check if the string matches a directory
[[ -d $filename ]]

# -x is for an executable file
# -L is for a symbolic link (aka shortcut)
# and more