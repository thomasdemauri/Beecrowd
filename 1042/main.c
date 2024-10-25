#include <stdio.h>

int main() {

    int arr[3], cp[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    for (int i=0; i<3; i++) {
        cp[i] = arr[i];
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j < 3 - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = aux;
            }
        }
    }

    for (int i=0; i<3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for (int i=0; i<3; i++) {
        printf("%d\n", cp[i]);
    } 

    return 0;
}