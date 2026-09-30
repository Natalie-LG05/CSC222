#include <stdio.h>

const int hoursPerDay = 24;
const int minutesPerHour = 60;
const int secondsPerMinute = 60;

int main(void) {
    printf("Enter a negative value at any point to quit.\n");

    while (1) {
        int seconds = 49;
        int minutes = 0;
        int hours = 0;
        int days = 0;

        printf("Enter the number of seconds to convert: ");
        scanf("%d", &seconds);

        if (seconds < 0) break;

        if (seconds >= secondsPerMinute) {
            minutes = seconds / secondsPerMinute;
            seconds -= minutes * secondsPerMinute;
        }

        if (minutes > 0 && minutes >= minutesPerHour) {
            hours = minutes / minutesPerHour;
            minutes -= hours * minutesPerHour;
        }

        if (hours > 0 && hours >= hoursPerDay) {
            days = hours / hoursPerDay;
            hours -= days * hoursPerDay;
        }

        if (days > 0) printf("%dd %dh %dm %ds\n", days, hours, minutes, seconds);
        else if (hours > 0) printf("%dh %dm %ds\n", hours, minutes, seconds);
        else if (minutes > 0) printf("%dm %ds\n", minutes, seconds);
        else printf("%ds\n", seconds);
    }

    printf("Done\n");

    return 0;
}