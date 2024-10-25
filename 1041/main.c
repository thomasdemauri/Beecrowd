#include <stdio.h>

char *localiza_quadrante(float x, float y) {

    if (x == 0 && y == 0) {
        return "Origem\n";
    }

    if (x == 0) {
        return "Eixo Y\n";
    }

    if (y == 0) {
        return "Eixo X\n";
    }

    if (x > 0 && y > 0) {
        return "Q1\n";
    }

    if (x < 0 && y > 0) {
        return "Q2\n";
    }

    if (x < 0 && y < 0) {
        return "Q3\n";
    }

    if (x > 0 && y < 0) {
        return "Q4\n";
    }

}

int main() {

    float x, y;
    scanf("%f %f", &x, &y);

    printf("%s", localiza_quadrante(x, y));

    return 0;
}