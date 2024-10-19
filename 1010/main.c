#include <stdio.h>

#define LIM 2
 
int main() {
    
    int cod[LIM];
    int qtd[LIM];
    float valor[LIM];
    float valor_total = 0;

    for (int i=0; i<LIM; i++) {
        scanf("%d %d %f", &cod[i], &qtd[i], &valor[i]);
    }

    for (int i=0; i<LIM; i++) {
        valor_total += qtd[i] * valor[i];
    }

    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;
}