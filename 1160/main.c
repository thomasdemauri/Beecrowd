#include <stdio.h>

#define LIM 3000

int main() {

    int t;  // num de testes
    scanf("%d", &t);

    int pa[t], pb[t]; // populacao A, populacao B
    float ga[t], gb[t]; // taxa de crescimento A, taxa de crescimento B

    // ---> taxa de crescimento B é sempre menor que A

    for (int i=0; i<t; i++) {
        scanf("%d %d %f %f", &pa[i], &pb[i], &ga[i], &gb[i]);
    }

    for (int i=0; i<t; i++) {

        int anos = 0;

        while (pa[i] <= pb[i]) {
            
            pa[i] += (int) (pa[i] * (ga[i] / 100));
            pb[i] += (int) (pb[i] * (gb[i] / 100));

            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}