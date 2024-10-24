#include <stdio.h>

int main() {

    int age_days, years=0, months=0, days=0;

    scanf("%d", &age_days);

    years = age_days / 365;
    months = (age_days - years * 365) / 30;
    days = (age_days - years * 365) % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}