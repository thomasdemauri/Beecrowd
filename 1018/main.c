#include <stdio.h>

int main() {

    int n100=0, n50=0, n20=0, n10=0, n05=0, n02=0, n01=0;
    int amount, cp;

    scanf("%d", &amount);
    cp = amount;

    if (amount >= 100) {
        n100 = amount / 100;
        amount -= n100 * 100;
    }

    if (amount >= 50) {
        n50 = amount / 50;
        amount -= n50 * 50;
    }

    if (amount >= 20) {
        n20 = amount / 20;
        amount -= n20 * 20;
    }

    if (amount >= 10) {
        n10 = amount / 10;
        amount -= n10 * 10;
    }

    if (amount >= 5) {
        n05 = amount / 5;
        amount -= n05 * 5;
    }

    if (amount >= 2) {
        n02 = amount / 2;
        amount -= n02 * 2;
    }

    if (amount >= 1) {
        n01 = amount / 1;
        amount -= n01 * 1;
    }

    printf("%d\n", cp);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n05);
    printf("%d nota(s) de R$ 2,00\n", n02);
    printf("%d nota(s) de R$ 1,00\n", n01);

    return 0;
}