#include <stdio.h>

/**
 * 
Degustação de chá às escuras é a habilidade de identificar um chá usando apenas seus sentidos do olfato e paladar.

Isto faz parte da Competição Ideal de Consumidores de Chá Puro (da sigla em inglês ICPC), que um programa de TV local está organizando. 
Durante o show, um bule de chá completo é preparado e são entregues uma xícara de chá para cada um dos cinco competidores. 
Os participantes devem cheirar, saborear e avaliar a amostra, de modo a identificar o tipo de chá, que pode ser: 
(1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas. 
No final, as respostas são verificadas para determinar o número de suposições corretas.

Dado o tipo de chá real e as respostas fornecidas, determinar o número de participantes que receberam a resposta correta.
Entrada

A primeira linha contém um inteiro T representando o tipo de chá (1 ≤ T ≤ 4). 
A segunda linha contém cinco inteiros A, B, C, D e E, que indica a resposta dada por cada competidor (1 ≤ A, B, C, D, E ≤ 4).
 */

#define JOGADORES 5

int main() {

    int respostas[JOGADORES];
    int cha = 0, acertos = 0;

    do {
        scanf("%d", &cha);
    } while (cha < 1 || cha > 4);

    scanf("%d %d %d %d %d", &respostas[0], &respostas[1], &respostas[2], &respostas[3], &respostas[4]);

    for (int i=0; i<JOGADORES; i++) {
        if (respostas[i] == cha) {
            acertos++;
        }
    }

    printf("%d\n", acertos);

    return 0;
}