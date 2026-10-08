#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[20];
} Person;

int main() {
    Person *personPtr;
    personPtr = malloc(sizeof(Person));

    personPtr->age = 30;
    strcpy(personPtr->name, "Amanda");

    int length;
    scanf("%d", &length);

    printf("%s's age is %d.\n", personPtr->name, personPtr->age);

    free(personPtr);
}