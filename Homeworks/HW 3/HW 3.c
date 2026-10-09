#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// functional prototypes
void printIntro(void);
void promptForValue(const char *description, double *value);
void printAccuracy(void);
double f(double x);
double *makeSamplePoints(double a, double b, double delta, int *count);
double riemannSum(const double *start, const double *end, double delta);

int main(void) {
    double a;
    double b;
    double delta;

    printIntro();

    promptForValue("a", &a);
    promptForValue("b", &b);

    printAccuracy();
    promptForValue("delta", &delta);

    // riemann sum
    int n;
    double *samplePoints = makeSamplePoints(a, b, delta, &n);

    const double sum = riemannSum(samplePoints, samplePoints + n, delta);

    // free allocated memory
    free(samplePoints);

    // print final statement
    printf("The integral over the provided limits is %.4lf\n", sum);

    return 0;
}

void printIntro(void) {
    printf("This program will calculate the integral of the function\n\t3x^3 - 2x^2\nBetween user defined limits: a and b");
}

void promptForValue(const char *description, double *value) {
    printf("What is the value of \"%s\": ", description);
    scanf("%lf", value);
}

void printAccuracy(void) {
    printf("The accuracy of this calculation depends on the value of delta that you use.\n");
}

double f(double x) {
    return 3*pow(x, 3) - 2*pow(x, 2);
}

// no array notation allowed
double *makeSamplePoints(double a, double b, double delta, int *count) {
    const int n = (int)((b-a) / delta);

    double *samplePoints = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        *(samplePoints + i) = a + i*delta;
    }

    *count = n;
    return samplePoints;
}

// no array notation allowed
double riemannSum(const double *start, const double *end, double delta) {
    double sum = 0;

    for (double *i = start; i < end; i++) {
        sum += f(*i) * delta;
    }

    return sum;
}