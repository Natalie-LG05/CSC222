#include <stdio.h>

int main() {
    // An array of grades
    // In C, the [] goes after the name of the variable instead of the type
    double grades[] = {92.1, 5.0, 110.0, 85.0, 75.4};

    printf("First Grade: %lf\n", grades[0]);

    // Pointers are memory location
    // Identifier for the array accesses its pointer
    printf("grades memory location: %p\n", grades);
    
    return 0;
}