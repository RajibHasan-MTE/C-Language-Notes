#include <stdio.h>

enum Weekday { SUNDAY = 7, MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY }; // Define an enum for weekdays with custom values

int main() {
    enum Weekday meetingDay = FRIDAY;

    printf("Meeting is scheduled on day %d of the week.\n", meetingDay); // Outputs: 5

    return 0;
}

