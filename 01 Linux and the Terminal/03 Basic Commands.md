### Basic Commands

#### cd - change directory
```
- cd [directory]     
- Just `cd` goes home
- `cd ~` goes to the current user's home
- The `cd` command is not in the biinaries directory
- `cd` functionality provided by bash
```

#### pwd - Print Working Directory
```
- pwd
- print the current working directory
```

#### ls - List
```
- ls [filepath]
- lists files in at the destination (by default the current directory)
- Some flags for ls:
  - `-a` for all; shows . and .. and anything starting with a . (shows hidden files)
  - `-l` for details about each file
  - `-h` for human readable file sizes
  - can combine (Ex: `-alh`)
```

#### File System Manipulation
```
- `mkdir` for make directory: mkdir [name1] [name2] [name3] ...
- `touch` to make a file: touch [name1] [name2] [name3] ...
- `rmdir` to remove an empty directory: rmdir [filepath]
- `rm` to remove a file: rm [filepath]
- `rm -rf` remove a directory and all files inside: rm -rf [filepath]
```

#### Working With Files
```
- `cat` stands for concatenate. It shows the contents of a file as output: cat [filepath]
- `more` and `less` are applications that show contents of a file: more/less [filepath]
- `cp` for copy: cp [filepath] [destination_filepath]
- `mv` for move (or rename): mv [filepath] [destination_filepath]
- `wget` for web get (downloads contents at a url): wget [url]
- `xdg-open` opens a file in its default app
```

#### Terminal-Based Text Editors
```
- nano: easy to use text editor
- vim: more powerful than nano, but has a steep learning curve
- vimtutor: will help you learn vim
```

#### Other Helpful Things
```
- `echo` prints something as output
- `printf` is similar to echo
- `history` shows the history of commands you typed
  - `history -c` clears the history
- `clear` will clear the current contents of the terminal
- The up arrow key (and down arrow key) cycle through presvious commands
- Tab to autocomplete
- Ctrl + C kills the current process (usually...)
```