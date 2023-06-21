#include <stdio.h>
#include <stdlib.h>

int calculate_total_seconds(const char* time_string) {
    int total_seconds = 0;
    int multiplier = 1;
    int i = 7;  // Index of the last character in the time string

    // Iterate from right to left through the time string
    while (i >= 0) {
        if (time_string[i] == ':') {
            i--;
            continue;
        }

        int seconds = 0;
        int digit = 1;

        // Extract the digits of the current component (hours, minutes, or seconds)
        while (i >= 0 && time_string[i] != ':') {
            seconds += (time_string[i] - '0') * digit;
            digit *= 10;
            i--;
        }

        total_seconds += seconds * multiplier;
        multiplier *= 60;
    }

    return total_seconds;
}

int main() {
    char time_string[9];
    printf("Enter the time in the format 'hh:mm:ss': ");
    fgets(time_string, sizeof(time_string), stdin);

    int total_seconds = calculate_total_seconds(time_string);
    printf("Total seconds: %d\n", total_seconds);

    return 0;
}
