#include <stdio.h>
 
int main() {

    float litros = 0;       // litros necessarios
    float consumo = 12.0;   // km/l
    float vel_media = 0;    // km/h
    int tempo = 0;          // tempo gasto na viagem em horas

    scanf("%d", &tempo);
    scanf("%f", &vel_media);

    litros = (tempo * vel_media) / consumo;

    printf("%.3f\n", litros);

    return 0;
}