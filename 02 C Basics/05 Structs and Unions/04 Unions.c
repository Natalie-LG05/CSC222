#include <stdio.h>
#include <string.h>

// similar to a struct except all members share memory, that is only one member can be "remembered" at once
union Student {
    float gpa;
    char name[10];
};

int main() {
    union Student student;

    student.gpa = 3.4;

    // since this is a union, gpa is overwritten
    strcpy(student.name, "Tony");

    // output
    printf("gpa: %f\n", student.gpa);
    printf("name: %s\n", student.name);
    printf("size: %llu\n", sizeof(union Student));

    return 0;
}