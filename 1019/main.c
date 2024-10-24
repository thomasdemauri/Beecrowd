#include <stdio.h>

#define SECONDS_PER_HOUR 3600
#define SECONDS_PER_MINUTES 60

int main() {

    int time_in_seconds, hours = 0, minutes = 0, seconds = 0;

    scanf("%d", &time_in_seconds);

    hours = time_in_seconds / SECONDS_PER_HOUR;
    minutes = (time_in_seconds - hours * SECONDS_PER_HOUR) / SECONDS_PER_MINUTES;
    seconds = ((time_in_seconds - hours * SECONDS_PER_HOUR) - minutes * 60);

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}