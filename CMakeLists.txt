cmake_minimum_required(VERSION 4.3)
project(csc222 C)

set(CMAKE_C_STANDARD 11)

add_executable(csc222
        "02 C Basics/01 Hello World/hello.c"
        "02 C Basics/02 Data Types and Operators/01 Data Types.c"
        "02 C Basics/02 Data Types and Operators/02 Operators.c"
        "02 C Basics/03 Arrays, Funcs, Loops, Pointers/01 Grades.c"
        "02 C Basics/03 Arrays, Funcs, Loops, Pointers/02 Grades - with Pointers.c"
        "Year 2/03 C Basics/01 Hello World/hello_world.c"
        "Year 2/03 C Basics/02 Data Types/01 Ints.c"
        "Year 2/03 C Basics/02 Data Types/02 Chars.c"
        "Year 2/03 C Basics/02 Data Types/03 Floats and Doubles.c"
        "Year 2/03 C Basics/02 Data Types/04 Operators.c"
        "Year 2/03 C Basics/03 Funcs, Arrays, Loops/01 Grades.c"
        "Year 2/03 C Basics/04 Pointers/01 Pointers.c"
        "Year 2/03 C Basics/04 Pointers/02 Grades with Pointers.c"
        "Year 2/03 C Basics/05 Memory Allocation/01 Malloc and Calloc.c"
        "Year 2/03 C Basics/05 Memory Allocation/02 Realloc.c"
        "Year 2/03 C Basics/06 Structures and Unions/01 Structs.c"
        "Year 2/03 C Basics/06 Structures and Unions/02 Unions.c")
