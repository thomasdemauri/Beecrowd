#include <stdio.h>
#include <string.h>
 
/**

Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele
no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, 
informar o total a receber no final do mês, com duas casas decimais.

Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double)
com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas efetuadas
por este vendedor, respectivamente.

Saída
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.
 */

#define PERC_COMISSAO 15.00

int main() {

    char nome[50];
    double sal_fixo = 0, total_vendas = 0, comissao = 0, total_receber = 0;

    fgets(nome, sizeof(nome), stdin);
    size_t ultimo_char = strlen(nome) - 1;
    if (nome[ultimo_char] == '\n') {
        nome[ultimo_char] = '\0';
    }

    scanf("%lf", &sal_fixo);
    scanf("%lf", &total_vendas);

    // comissão sobre vendas efetuadas
    comissao = (PERC_COMISSAO/100) * total_vendas;

    total_receber = sal_fixo + comissao;

    printf("TOTAL = R$ %.2lf\n", total_receber);

    return 0;
}