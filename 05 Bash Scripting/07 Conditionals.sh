#!/bin/bash

# use test to do a comparison
# use fi at the end of an if statement to finish the if statement
# yes it is if backwards
if test $1 -gt 5
then
  echo "arg is larger"
fi

# shorthand for test
# must put spaces at start and end of bracketed area
# ; for alternate syntax
if [ $1 -lt 5 ]
then
  echo "arg is smaller than 5"
fi

if [ $1 -lt 5 ]
then
  echo "arg is smaller than 5"
elif [ $1 -gt 5]
then
  echo "arg is greater than 5"
else
  echo "$1 is 5"
fi

# just some notes from here on out
# integer comparisons
# [ 3 -ge 2 ]  # greater than or equal
# (( 5 >= ))

# [ 2 -le 2 ]  # less than or equal
# (( 2 <= 6 ))

# [ 5 -eq 5 ]  # note the == is not for ints

# for strings
# [ "hi" == 'hi" ]  # returns True for string literal matching

# my_var="hello world"
# [ $myvar == "hello world" ]  # results in an error because of "string splitting"
# fix it with quotes
# [ "$my_var" == "hello world" ]  # returns true
# [[ $my_var == "hello world" ]]  # returns true

# avar=""
# [ -z $avar ]  # -z checks for empty string

# [ -n $avar ]  # -n checks if it is not empty/null