#include <stdio.h>
#include <stdbool.h>

void processa_grenal(int *gol_inter, int *gol_gremio, int *vit_inter, int *vit_gremio, int *empate) {

    if (*gol_inter == *gol_gremio) {
        (*empate)++;
    } else if (*gol_inter > *gol_gremio) {
        (*vit_inter)++;
    } else {
        (*vit_gremio)++;
    }

    *gol_inter = 0;
    *gol_gremio = 0;

    return;
}

void exibe_estatisticas(int *vit_inter, int *vit_gremio, int *grenais, int *empate) {
    
    printf("%d grenais\n", *grenais);
    printf("Inter:%d\n", *vit_inter);
    printf("Gremio:%d\n", *vit_gremio);
    printf("Empates:%d\n", *empate);

    if (*vit_inter == *vit_gremio) {
        printf("Nao houve vencedor\n");
    } else if (*vit_inter > *vit_gremio) {
        printf("Inter venceu mais\n");
    } else {
        printf("Gremio venceu mais\n");
    }

    return;
}

int main() {
    
    int grenais = 0;                                // Armazena quantidade de grenais
    int gol_inter = 0, gol_gremio = 0;              // Armazena os gols de uma partida
    int vit_inter = 0, vit_gremio = 0, empate = 0;  // Armazena as vitórias de cada time
    bool continua = true;

    while (continua) {

        grenais++;

        scanf("%d %d", &gol_inter, &gol_gremio);
        processa_grenal(&gol_inter, &gol_gremio, &vit_inter, &vit_gremio, &empate);
        
        int quer_continuar = 0;
        printf("Novo grenal (1-Sim 2-Nao)\n");
        scanf("%d", &quer_continuar);

        if (quer_continuar == 2)
            continua = false;
    }

    exibe_estatisticas(&vit_inter, &vit_gremio, &grenais, &empate);

    return 0;
}