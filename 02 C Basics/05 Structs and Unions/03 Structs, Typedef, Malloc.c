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

    int a[length];
    for (int i = 0; i < length; i++) {
        a[i] = i*2;
    }
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}