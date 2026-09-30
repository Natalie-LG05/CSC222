#include <stdio.h>

const float litersPerGallon = 3.785f;
const float kilometersPerMile = 1.609f;

int main(void) {
    float miles;
    printf("Enter number of miles travelled: ");
    scanf("%f", &miles);

    float gallons;
    printf("Enter number of gallons of gas used: ");
    scanf("%f", &gallons);

    float milesPerGallon = miles / gallons;
    printf("Mile-per-gallon: %.2f\n", milesPerGallon);

    float kilometersPerLiter = milesPerGallon * kilometersPerMile / litersPerGallon;
    float litersPerKm = 1 / kilometersPerLiter;
    float litersPer100Km = litersPerKm * 100;
    printf("Liters-per-100-km: %.1f\n", litersPer100Km);

    return 0;
}