#include <stdio.h>

// constants
const int HOURS_IN_DAY = 24;
const int MIN_IN_HOUR = 60;
const int SEC_IN_MIN = 60;

int main() {
    printf("Enter a negative value at any point to quit.");
    while (1) {
        int seconds;
        printf("Enter the number of seconds to convert: ");
        scanf("%d", &seconds);

        if (seconds < 0) break;

        // integer division will give the number of whole days in the given number of seconds
        int days = seconds / (SEC_IN_MIN * MIN_IN_HOUR * HOURS_IN_DAY);
        seconds -= days * (SEC_IN_MIN * MIN_IN_HOUR * HOURS_IN_DAY);  // take off the number of seconds used to make up the whole days

        int hours = seconds / (SEC_IN_MIN * MIN_IN_HOUR);  // get the number of whole hours left
        seconds -= hours * (SEC_IN_MIN * MIN_IN_HOUR); // take off the number of seconds used to make up the whole hours

        int minutes = seconds / (SEC_IN_MIN);  // get the number of whole minutes
        seconds -= minutes * (SEC_IN_MIN);  // take off the number of seconds used to make up the whole minutes

        printf("%dd %dh %dm %ds", days, hours, minutes, seconds);
    }
    
    return 0;
}