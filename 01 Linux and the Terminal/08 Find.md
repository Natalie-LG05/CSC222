## Find  
`Find` is used to find a file or directory.

Format:
```sh
find [path] [flags] [expression]
```

```
`-name` lets you specify the filename you are looking for, finding file who's name contains the given expression
`-iname` ignores case for the name search
`-type f` ssearches for file only (not directories)
`-type d` searches for directories only
`-size +1k` files larger than 1Kb
`-size -1k` files smaller than 1Kb
`-mtime +7` modified more than 7 days ago
```

```sh
# examples
find . -name "main.py"
find . -name "*.py"
```