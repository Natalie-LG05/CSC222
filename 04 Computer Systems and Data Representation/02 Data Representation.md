## Data Representation  
A bit (binary digit) is our base unit.  
A byte is 8 bits.  
2 hex digits is 1 bytes.  

C logical operators (e.g. &&, ||) treat nonzero arguments as 1, and zero as 0  

### Information Storage
Def: Processes view memory as a large array of bytes known as virtual memory. The index for each entry is the memory address. Each entry is 1 byte.  

Def: The word size of a machine (typically 32-bit or 64-bit) determines the max size of virtual memory. That is, the largest address is determined by the largest possible integer we can represent. 2^w addresses (w is word size in bits).  

### Byte Ordering in Memory for Multibyte Data  
Big Endian - Big end first; Most significant byte is first  
Little Endiant - Little end first; Least significant byte is first  

Example: Represent x = 0x01234567 in memory using big and little endian orderings.  
Big Endian:
```
... | 01 | 23 | 45 | 67 | ...
     0x51 0x52 0x53 0x54
```  
Little Endian:
```
... | 67 | 45 | 23 | 01 | ...
     0xA1 0xA2 0xA3 0xA4
```