#include <stdio.h>
#include <stdlib.h>

int main() {

    int initial_hour, initial_min, final_hour, final_min, initial_time, final_time, diff;
    int hours_diff, min_diff;

    scanf("%d %d %d %d", &initial_hour, &initial_min, &final_hour, &final_min);

    // Convert to hours and minutes
    initial_time = initial_hour * 60 + initial_min;
    final_time   = final_hour * 60 + final_min;

    if (final_time <= initial_time) {
        final_time += 24 * 60;    // + 24 hours
    }

    // Get the difference
    diff = final_time - initial_time;

    hours_diff = diff / 60;
    min_diff = diff % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours_diff, min_diff);

    return 0;
}