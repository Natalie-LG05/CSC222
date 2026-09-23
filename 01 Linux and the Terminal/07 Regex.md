## Regular Expressions (REGEX)  
Regex specifies a pattern in text.  
-P is a flag for grep that enables Perl compatible regex

### Character Types  
```
Character       Meaning  
.               any character (except the newline char)  
\d              digits 0-9  
\D              not a digit  
\w              a word char (a-z, A-Z, 0-9, or _)  
\W              not a word char  
\s              whitespace (space, tab, or newline)    
\S              not whitespace  
```

### Meta Characters  
```
Character       Meaning  
[]              grouping specifying valid chars for 1 char (can do [A-Z], [a-z], etc.) 
[^]             not the characters listed  
{}              quantifies the preceding char (ex: \d{3}) (ex: \d{3,} <-- 3 or more)  
()              for making a group  
\               escape the following character (\\d)  
|               or  
?               matches 0 or 1 of preceding char  
*               matches 0 or more of the preceding char
+               matches 1 or more of the preceding char
```

### Boundary Characters  
```
Character       Meaning
\b              Word Boundary (occurs when we have a 
                word char next to a non-word char)
\B              not a word boundary
^               used for beginning of line
$               used for end of line
```