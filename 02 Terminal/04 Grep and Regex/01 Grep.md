## grep  

grep = Globally search for a Regular Expression and Print  

### Format  
grep [flags] [searchstring] [filepath]    

### Examples  
```sh
# search for cat in main.py
grep cat main.py

# ignore case
grep -i cat main.py

# search in a directory
grep -r cat docs/
grep -r cat .       # . for "here"

# count number of lines with -c
grep -c cat .

# show individual occurrences 
grep -o cat main.py

# combine flags
grep -iro meow

# pipe into wordcount (and lines only)
grep -iro cat meow . | wc -l
```