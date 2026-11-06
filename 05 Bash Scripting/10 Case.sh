#!/bin/bash

echo "What is your favorite food?"
echo "1 - Pizza"
echo "2 - Chicken Nuggets"
echo "3 - Burgers"

read food;

case $food in
  1) echo "Pizza is great";;
  2) echo "The caf's chicken nuggets are better than McD"
       echo "It's because the playplace is gone";;
  3) echo "Caf's burgers are protein";;
  *) echo "Not an option";;
esac