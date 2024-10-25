#include <stdio.h>
#include <math.h>

float calc_delta(float a, float b, float c) {
    return pow(b, 2) - (4*a*c);
}

void calc_raizes(float a, float b, float c) {

    float bha=0, x1=0, x2=0;
    float delta = calc_delta(a, b, c);

    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
    } else {
        // +
        x1 = (-b + sqrt(delta)) / (2*a);

        // -
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }

    return;
}

int main() {

    float a, b, c, delta;
    scanf("%f %f %f", &a, &b, &c);

    calc_raizes(a, b, c);

    return 0;
}