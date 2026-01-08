#include <stdio.h>

const float LITERS_PER_GALLON = 3.785;
const float KILOMETERS_PER_MILE = 1.609;

int main() {
    float miles;
    printf("Enter number of miles travelled: ");
    scanf("%f", &miles);

    float gallons;
    printf("Enter number of gallons of gas used: ");
    scanf("%f", &gallons);

    float milesPerGallon = miles / gallons;
    printf("Mile-per-gallon: %.2f\n", milesPerGallon);

    float liters = gallons * LITERS_PER_GALLON;
    float kilometers = miles * KILOMETERS_PER_MILE;
    float litersPerKilometer = liters / kilometers;
    float litersPer100Kilometers = 100 * litersPerKilometer;
    printf("Liters-per-100-Kilometers: %.1f\n", litersPer100Kilometers);
    
    return 0;
}