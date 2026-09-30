#include <stdio.h>

// This file showcases a variety of programming structures we know already but in C

// The example is calculating a final letter grade from a variety of grades

// Functional Prototyping
double computerAverage(double values[], int size);
char assignLetterGrade(double avg);

int main() {
    // Arrays
    // the brackets for declaring an array go after the name in C
    // array initialization using an array literal
    double grades[] = {92.5, 85.1, 22.3, 78.5, 100.0, 0.1};

    // to declare an empty array of a specified size:
    // double values[10];

    // Strings
    // strings are character arrays in C
    char studentName[] = "Alex";

    // to get the length utilize the sizeof() function
    // note: sizeof() returns the size in bytes
    int size = sizeof(grades) / sizeof(double);

    // %p for pointer
    printf("Grades memloc: %p\n", grades);
    printf("Length: %lu\n", length);

    double average = computeAvereage(grades, length);
    char letter = assignLetterGrade(average);

    // Outputting results
    printf("Student: %s\n", studentName);
    printf("Grades: ");

    for (int i = 0; i < length; i++) {
        printf("%.1f ", grades[i]);
    }

    printf("\nAverage: %.1f\n", average);
    printf("Final Letter Grade: %c\n", letter);
    
    return 0;
}

// Functions
// arrays decay to pointers when passed into functions, so we must pass in the size of the array as an argument
double computeAverage(double values[], int size) {
    double sum = 0.0;
    
    for (int i = 0; i < size; i++) {
        sum += values[i];
    }
    
    return sum / size;
}

char assignLetterGrade(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}