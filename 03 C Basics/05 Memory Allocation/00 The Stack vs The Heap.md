## The Stack and The Heap  
These are memory allocation abstractions  

### The Stack  
Allocation of memory on **the stack** refers to the default allocation of memory in C 

When a function is called (ex: main or some other function), any variables will get allocated to the stack  

When the function ends, the variables get deallocated automatically.  

The stack is considered "fast"  

## The Heap  
Allocation of memory on **the heap** refers to manual allocation of memory  

Functions such as malloc, calloc, realloc allow us to do this.  

These allow for flexible data structures such as linked lists.  

Could lead to memory leaks (use free to clear)  