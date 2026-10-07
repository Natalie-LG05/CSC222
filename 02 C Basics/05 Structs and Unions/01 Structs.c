#include <stdio.h>

// structs are collections of different types of data
// similar to how an array is a collection of the same type of data

// they feel like the "state" or "properties" of OOP
// memory is allocated for each member separately

struct Person {
    int age;  // location of first member is location of struct (similar to an array)
    char name[20];  // subsequent members are adjacent (contiguous) in memory (also similar to an array)
};

void printPerson(struct Person person) {
    printf("%s is %d years old.\n", person.name, person.age);
    printf("%s is located at %p.\n", person.name, &person);
    printf("%s's age is stored at %p.\n", person.name, &person.age);
    printf("%s's name is stored at %p.\n", person.name, &person.name);
}

int main() {
    struct Person bill = {10, "Bill"};
    struct Person amanda = {20, "Amanda"};

    printPerson(bill);
    printPerson(amanda);

    return 0;
}