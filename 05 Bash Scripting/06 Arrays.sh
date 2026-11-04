#!/bin/bash

groceries=("bread" "milk" "eggs")
costs=(3 3 4)

# get zeroth item
echo $groceries

# gets an item at an index
echo ${groceries[1]}

# get all the values
echo ${groceries[@]}

# Numeric arrays
# numeric arrays let you assign values with numeric indices
declare -a my_array
my_array[0]="Hi"
my_array[1]="world"
my_array[2]=10
echo ${my_array[@]}