#include <stdio.h>

// Functional Prototyping
// define the header of the function
// stating types for parameters and return
double computeAverage(double values[]);

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
    double average = computeAverage(grades);
    
    return 0;
}

double computeAverage(double values[]) {
    double sum = 0.0;
    int length = sizeof(values) / sizeof(double);
    for (int i = 0; i < length; i++) {
        
    }
}