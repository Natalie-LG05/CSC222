#!/bin/bash

# use $? to  access the last exit code of whatever ran previously in the script

# example:
ls -a .
echo "Exit code from ls was $?";

# example:
akjfhgk -abcdefg  # not a real command, not real args
echo "Exit code from akjfhgk is $?"