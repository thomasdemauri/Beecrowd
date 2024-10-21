#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    // A cada km se afasta 2 minutos
    // Para fim pratico, considerei velocidade do carro como int

    int carro_x, carro_y, maior_velocidade, menor_velocidade, distancia_por_hora, tempo, minutos_por_km;
    int distancia_usuario;

    // carro_x = 60; // km/h
    // carro_y = 90; // km/h

    // maior_velocidade = ((carro_x + carro_y + abs(carro_x - carro_y))) / 2;
    // menor_velocidade = ((carro_x - carro_y + abs(carro_x + carro_y))) / 2;

    // distancia_por_hora = maior_velocidade - menor_velocidade;

    // distancia_por_hora = 30;
    // minutos_por_km = 60 / distancia_por_hora;
    // tempo = minutos_por_km * distancia_por_hora;

    scanf("%d", &distancia_usuario);
    distancia_por_hora = 30;
    minutos_por_km = 60 / distancia_por_hora;
    tempo = minutos_por_km * distancia_usuario;



    printf("%d minutos\n",  tempo);
    

    return 0;
}