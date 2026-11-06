#!/bin/bash

counter=0
while [ $counter -le 10 ]
do
  printf "$counter "
  ((counter++))
  sleep 0.25
done