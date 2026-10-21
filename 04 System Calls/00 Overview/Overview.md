## System Calls Overview  
source: Chapter 8 of the text. Computer Systems a Programmer's Perspective.  

Def: With respect to the processor, an **exception** is an abrupt change in the control flow in response to some change in the processor's state.  

### Classes of Exceptions  
1. Interrupts - Caused by a signal from an I/O device
2. Traps and System Calls - An intentional exception caused by executing an instruction
3. Faults - Potentially recoverable errors
4. Aborts - Non-recoverable errors

### About System Calls  
- Procedure-like interfaces between user programs and the kernel of the OS  
- In C, we can invoke them with the `syscall()` function, however, we typically use one of the wrappers for specific system calls (such as `fork()`, `exec()`, and `write()`)
- In IA32 ASM (intel 32), you'll see `int` for interrupt with `$0x80` as an argument to invoke a system call

### Common Calls and their Number
source: https://x86.syscall.sh/  

```
1   exit
2   fork
3   read
4   write
5   open
6   close
7   waitpid
11  execve
20  getpid
63  dup2
64  getppid
```

### Common Calls with Number for x86_64
source: https://x64.syscall.sh/

```
60  exit
57  fork
0   read
1   write
2   open
3   close
61  wait4
59  execve
39  getpid
33  dup2
110 getppid
```

```asm
; hello world program
; this is for x86 32 bit, with AT&T syntax
; note this is an incomplete program

string:
    .ascii "hello, world\n"
movl $4, %eax           ; Load syscall 4 into eax
                        ; 4 is write
movl $1, %ebx           ; 1 is the file descriptor
                        ; for stdout
movl $string, %ecx      ; load "hello, world\n"
                        ; into ecx
movl $13, %edx          ; load the length of
                        ; our string into edx
int $0x80               ; trigger syscall
```

### User Mode vs Kernel Mode
User Mode - The standard mode processes begin execution in. System calls do not run in user mode.  

Kernel Mode - An elevated-privilege mode processes can run in to interact with the hardware in order to create new files and processes.  

The **system calls interface** allows us to switch between modes.  

### Zombies and Reaping
Zombie - A completed process that hasn't been removed from the system. When processes terminate, the kernel doesn't remove it immediately.   

Reaping - The action of a parent process removing a terminated process from the system.  

fork() - The syscall interface function used to create child processes  

Ways of Terminating Processes:  
- Receives a signal to so
- Returns from main
- Calls the exit() syscall interface

In the case of a parent terminating without reaping its zombie children, the kernel will handle it.  

wait()/waitpid() - the syscall to wait for children to terminate  

### Signals
A **signal** is a small message that notifies a process that an event has occurred.  

### Some Common Signals
SIGKILL - kills a program
SIGQUIT - quit from keyboard
SIGINT  - interrupt from keyboard

In C, we have signal.h to use some of these  