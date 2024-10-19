#include <stdio.h>

/**
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto 
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

O arquivo de entrada contém 4 valores inteiros.

Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, 
com um espaço em branco antes e depois da igualdade.
 */

int main() {

    int a = 0, b = 0, c = 0, d = 0, diferenca = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    diferenca = (a*b - c*d);

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}