#!/bin/bash

counter=0
while [ $counter -le 10 ]
do
  printf "$counter "
  ((counter++))
  sleep 0.25
done

echo

until [ -f "hello.txt" ]
do
  echo "Make a file named hello.txt"
  read -p "Name of file: " filename
  touch $filename
done