#!/bin/bash

# use $((put_math_here)) to do math

echo $((2+3))
echo $((3-4))

num1=3
num2=4
result=$((num1+num2))

echo "The result is $result"

# non-ints
# pipe strings into basic calculator app
echo "2.3 + 1.2" | bc
echo "sqrt(12)" | bc -l  # use -l to load math lib
echo "scale=5; 10/3" | bc  # use scale to set # of decimal places