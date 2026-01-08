#include <stdio.h>

// Functional Prototypes
double computeAverage(double *values, int size);
char getLetterGrade(double numericGrade);

int main() {
    double grades[] = {99, 99.1, 99.9, 100.100, 105};
    int size = sizeof(grades) / sizeof(double);
    char student[] = "Josh";
    
    // Pointer to the start of the array
    double *pGrades = grades;  // don't need to use & since arrays are already pointers

    // call the functions
    double average = computeAverage(pGrades, size);
    char letterGrade = getLetterGrade(average);

    printf("Student: %s\n", student);
    printf("Grades:\n");
    // for loop with pointers
    // note: if p is the pointer to the first item of the array here, p + 1 is one whole double after the first item in the array
    for (double *p = grades; p < grades + size; p++) {
        printf("- %.2lf at %p\n", *p, p);
    }

    printf("Average %lf", average);
    printf("Letter Grade: %c", letterGrade);
    
    return 0;
}

double computeAverage(double *values, int size) {
    double sum = 0.0;
    double *end = values + size;
    for (double *p = values; p < end; p++) {
        sum += *p;  // *p is dereferencing the pointer
    }
    return sum / size;
}

char getLetterGrade(double numericGrade) {
    if (numericGrade >= 90) return 'A';
    else if (numericGrade >= 80) return 'B';
    else if (numericGrade >= 70) return 'C';
    else if (numericGrade >= 60) return 'D';
    else return 'F';
}