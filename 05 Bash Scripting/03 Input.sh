#!/bin/bash

# use read -p to prompt
# -p is for the prompt
# then list variables you want to create and hold values after
read -p "Enter your first and last name: " first_name last_name

# want to prevent shoulder surfing?
# use -s
echo "Give me a secret: "
read -s your_secret

echo $first_name $last_name
echo $your_secret