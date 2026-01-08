#include <stdio.h>

// Functional Prototyping
// define the header of the function
// stating types for parameters and return
double computeAverage(double values[], int size);
char getLetterGrade(double numericGrade);

int main() {
    // An array of grades
    // In C, the [] goes after the name of the variable instead of the type
    double grades[] = {92.1, 5.0, 110.0, 85.0, 75.4};

    printf("First Grade: %lf\n", grades[0]);

    // Pointers are memory location
    // Identifier for the array accesses its pointer
    printf("grades memory location: %p\n", grades);

    // arrays decay to pointers when you pass them into functions
    // calculate the size on the outside of the function
    int length = sizeof(grades) / sizeof(double);
    printf("Number of grades: %d\n", length);

    // compute the average
    double average = computeAverage(grades, length);
    printf("Average: %lf\n", average);

    // get the letter grade
    char letterGrade = getLetterGrade(average);
    printf("Letter Grade: %c\n", letterGrade);
    
    return 0;
}

double computeAverage(double values[], int length) {
    // reminder, size is being passed in because arrays decay to pointers when passed into functions
    double sum = 0.0;
    for (int i = 0; i < length; i++) {
        sum += values[i];
    }
    return (sum / length);  // result will be a double since sum is a double, even though length is an int
}

char getLetterGrade(double numericGrade) {
    if (numericGrade >= 90) return 'A';
    else if (numericGrade >= 80) return 'B';
    else if (numericGrade >= 70) return 'C';
    else if (numericGrade >=60) return 'D';
    else return 'F';
}