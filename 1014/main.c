#include <stdio.h>
 
int main() {
 
    int distancia_total = 0;        // km
    float combustivel_gasto = 0;    // litros
    float consumo_medio = 0;

    scanf("%d %f", &distancia_total, &combustivel_gasto);

    consumo_medio = distancia_total / combustivel_gasto;

    printf("%.3f km/l\n", consumo_medio);

    return 0;
}