## Grep and Regex 

grep = Globally search for a Regular Expression and Print  

### Format  
```
grep [flags] [searchstring as regex] [filepath]
``` 

```
- i is for ignore case
- r is for recursively search all subfolders
- c is for count
- o is for put each occurance on its own line
- P for Perl compatible regex
```

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