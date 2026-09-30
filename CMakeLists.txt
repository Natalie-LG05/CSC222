cmake_minimum_required(VERSION 4.3)
project(csc222 C)

set(CMAKE_C_STANDARD 11)

# Year 2 C files
add_executable(Old-hello_world "Year 2/03 C Basics/01 Hello World/hello_world.c")
add_executable(Old-01-Ints "Year 2/03 C Basics/02 Data Types/01 Ints.c")
add_executable(Old-02-Chars "Year 2/03 C Basics/02 Data Types/02 Chars.c")
add_executable(Old-03-Floats-and-Doubles "Year 2/03 C Basics/02 Data Types/03 Floats and Doubles.c")
add_executable(Old-04-Operators "Year 2/03 C Basics/02 Data Types/04 Operators.c")
add_executable(Old-01-Grades "Year 2/03 C Basics/03 Funcs, Arrays, Loops/01 Grades.c")
add_executable(Old-01-Pointers "Year 2/03 C Basics/04 Pointers/01 Pointers.c")
add_executable(Old-02-Grades-with-Pointers "Year 2/03 C Basics/04 Pointers/02 Grades with Pointers.c")
add_executable(Old-01-Malloc-and-Calloc "Year 2/03 C Basics/05 Memory Allocation/01 Malloc and Calloc.c")
add_executable(Old-02-Realloc "Year 2/03 C Basics/05 Memory Allocation/02 Realloc.c")
add_executable(Old-01-Structs "Year 2/03 C Basics/06 Structures and Unions/01 Structs.c")
add_executable(Old-02-Unions "Year 2/03 C Basics/06 Structures and Unions/02 Unions.c")

# Year 3 C files
add_executable(hello "02 C Basics/01 Hello World/hello.c")
add_executable(01-Data-Types "02 C Basics/02 Data Types and Operators/01 Data Types.c")
add_executable(02-Operators "02 C Basics/02 Data Types and Operators/02 Operators.c")
add_executable(01-Grades "02 C Basics/03 Arrays, Funcs, Loops, Pointers/01 Grades.c")
add_executable(02-Grades-with-Pointers "02 C Basics/03 Arrays, Funcs, Loops, Pointers/02 Grades - with Pointers.c")
add_executable(question1 "Homeworks/Lab 3/question1.c")
add_executable(question2 "Homeworks/Lab 3/question2.c")
add_executable(question3 "Homeworks/Lab 3/question3.c")
add_executable(question4 "Homeworks/Lab 3/question4.c")
