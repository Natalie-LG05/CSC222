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

# for i loop
for (( i=0; i < 5; i++ ))
do
  echo $i
done

# for each loop
for i in 1 2 3 4 5
do
  echo $i
done

for i in {0..5}
do
  echo $i
done

for i in {0..10..2}
do
  echo $i
done