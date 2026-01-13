#include <stdio.h>

// Structs
// Memory is allocated for each individual member
// Even if you make the char[] length 19, it will still be size 24bytes because
// an int being in the struct forces the struct's space to be divisible by 4 bytes (an int is 4 bytes)
struct Person {
    int age;  // location of first member is location of the entire Person structure
    char name[20];
};

// Functional prototypes
void printPerson(struct Person person);

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
    printf("The size of %s is %lu\n", person.name, sizeof(person));
}