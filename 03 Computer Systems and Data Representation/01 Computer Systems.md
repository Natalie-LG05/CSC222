## Computer Systems from a Programmer's Perspective  
### The Program Lifecycle  
Representation --> Compilation --> Execution  

Representation: Programs are represented as characters in the ASCII encoding  

Compilation: Programs go through the 4 phases of compilation. Outputs an executable.  

Execution: The executable file is loaded into memory The CPU executes the instructions in the executable.  

### Typical System
```  
CPU <=> I/O Bridge <=> Main Memory
<====V=====^===========V=================V=> I/O Bus
USB Controller  Graphics Adapter  Disk Controller
Keyboard, mouse       Display        Hard Drive
```

### Compilation  
`hello.c > Preprocessor (cpp) > hello.i > Compiler (cc1) > hello.s > Assembler (as) > hello.o > linker (ld) > hello`  
hello.c: a C file

cpp: Original doc is modified to include directive code (e.g. #include <stdio.h>) and do other things like removing comments and adding info to the top of the file.  
To see output (hello.i): `gcc hello.c -E -o hello.i`  

cc1: Translates the program to assembly  
To see output (hello.s): `gcc hello.c -S -o hello.s`  

as: Translates assembly to machine instructions. Creates an "object" file  
To see output (hello.o): `gcc hello.c -c -o hello.o`  

ld: Merge all needed object files (there may be needed object files elsewhere)  

### Role of the OS:
The OS protects the hardware and provides services to interact with the hardware.  
Apps go through the OS to affect hardware. Hardware includes the Processor, Main Memory, and I/O Devices.  
The OS achieves these goals through 3 fundamental abstractions.  

Files - the abstraction of I/O  
A file is a sequence of bytes. Files model display, hard drives, disks, etc.  

Virtual Memory - the abstraction of main memory and I/O.  
Each process assumes exclusive use of main memory through this abstraction.  

Processes - the abstraction of processor, main memory, and I/O.  
"Context Switching" allows the OS to run multiple processes "at the same time."  