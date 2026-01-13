#include <stdio.h>

// Functional prototypes
void printPerson(struct Person person);

struct Person {
    int age;  // location of first member is location of the entire Person structure
    char name[20];
};

int main() {
    struct Person bill = {10, "Bill"};
    struct Person amanda = {20, "Amanda"};

    printPerson(bill);
    printPerson(amanda);
    
    return 0;
}

void printPerson(struct Person person) {
    printf("%s is %d years old\n", person.name, person.age);
    printf("%s is located at %p\n", person.name, &person);
    printf("%s's age is located at %p\n", person.name, &person.age);
    printf("%s's name is located at %p\n", person.name, &person.name);
}