#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person amanda = {"Amanda", 20};
    struct Person *amandaPtr = &amanda;

    printf("%s's age is %d.\n", amandaPtr->name, amandaPtr->age);

    printf("%s's age is %d.\n", (*amandaPtr).name, (*amandaPtr).age);

    return 0;
}