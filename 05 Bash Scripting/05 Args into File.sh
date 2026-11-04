#!/bin/bash

# access individual command line args passed into this script with $int

echo "The file name is $0"
echo "The first arg after the file name is $1"
echo "The second arg after the file name is $2"

# want to get the number of args passed in (like argc in C)?
echo "Length of arg array is $#"

# want to get the length of a specific argument?
echo "Length of arg1 is ${#1}"
echo "Length of arg2 is ${#2}"

# want to get all the args as one single string?
echo "All args as string is $*"

echo "All args as an array $@"