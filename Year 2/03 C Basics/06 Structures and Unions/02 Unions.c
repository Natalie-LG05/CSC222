#include <stdio.h>
#include <string.h>

// Unions
// all the members share memory locations
// thus, you cannot access more than one member at the same time
// that is, a union can only remember one member at a time basically
union Student {
    double gpa;
    char name[10];
};

// This syntax means you don't have to put union when declaring a Teacher variable
// works for structs too
typedef union {
    double gpa;
    char name[10];
} Techer;

int main() {
    Teacher t1;  // declare a typedef union like this (no need to put the union keyword before it); works for structs too
    
    union Student student;
    student.gpa = 3.8;
    strcpy(student.name, "Tony");
    printf("gpa: %lf\n", student.gpa);
    printf("name: %s\n", student.name);
    printf("size: %lu\n", sizeof(union Student));
    
    return 0;
}