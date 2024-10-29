#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, sum=0;
    int min, max;

    scanf("%d", &a);
    scanf("%d", &b);

    min = (a + b - abs(a - b)) / 2;
    max = (a + b + abs(a - b)) / 2;
    
    for (int i=min+1; i<max; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}