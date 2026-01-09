#include <stdio.h>
#include <math.h>

// Functional Prototypes
void printIntro();
double promptUser(char var);
void printDeltaStatement();
double f(double x);
double calculateRiemannSum(double a, double b, double delta);

int main() {
    printIntro();  // print the intro statement

    // get all three user given variables
    double a = promptUser('a');  // get a
    double b = promptUser('b');  // get b
    printDeltaStatement();  // print a statement about the accuracy of the calculation
    double delta = promptUser('d');  // get delta

    double sum = calculateRiemannSum(a, b, delta);    
    printf("The integral over the provided lmits is %.4lf\n", sum);
    return 0;
}

void printIntro() {
    printf("This program will calculate the integral of the function 3x^3 - 2x^2 between user defined limits: a and b\n");
}

double promptUser(char var) {
    double result;
    if (var == 'a') {
        printf("What is the value of \"a\": ");
        scanf("%lf", &result);
    } else if (var == 'b') {
        printf("What is the value of \"b\": ");
        scanf("%lf", &result);
    } else if (var == 'd') {
        printf("What is the value of \"delta\": ");
        scanf("%lf", &result);
    }
    return result;
}

void printDeltaStatement() {
    printf("The accuracy of this calculation depends on the value of delta that you use.\n");
}

double f(double x) {
    return (3*pow(x, 3)) - (2*pow(x, 2));
}

double calculateRiemannSum(double a, double b, double delta) {
    double sum = 0.0;
    double i = a;  // start at x=a
    while (i < b) {
        sum += f(i) * delta;
        i += delta;
    }
    return sum;
}