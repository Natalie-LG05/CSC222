#include <stdio.h>

// Functional Prototypes
double computeAverage(double *values, int length);
char assignLetterGrade(double avg);

int main(void) {
    double grades[] = { 92.5, 100.5, 110.6, -1000000.0 };
    int length = sizeof(grades) / sizeof(double);
    char student[] = "Kyrylo";

    // put a * before the name of a variable to make a pointer
    double *pGrades = grades;

    double average = computeAverage(pGrades, length);
    char letter = assignLetterGrade(average);

    // print grades
    for (double *p = grades; p < grades + length; p++) {
        printf("%.1f at %p\n", *p, p);
    }

    printf("\nAverage: %.1f\n", average);
    printf("Final Grade: %c\n", letter);

    return 0;
}

// Functions
double computeAverage(double *values, int length) {
    double sum = 0.0;

    // pointer arithmetic means that adding one to the pointer will add the size of a the data type it points to
    // (so instead of adding one to the memory location, it will add 8 for a double or 4 for an int)
    for (double *p = values; p < values + length; p++) {
        sum += *p;  // the * here means to dereference memory, that is, it gives the value at that memory location
    }

    return sum / length;
}

char assignLetterGrade(double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}