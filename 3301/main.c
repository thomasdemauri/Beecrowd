#include <stdio.h>
 
int main() {
    
    int h = 0, z = 0, l = 0;    // huguinho, zezinho e luisinho

    scanf("%d %d %d", &h, &z, &l);

    if (h > z && h < l || h > l && h < z) { 
        printf("huguinho\n");
    } else if (z > h && z < l || z > l && z < h) {
        printf("zezinho\n");
    } else if (l > h && l < z || l > z && l < h) {
        printf("luisinho\n");
    }
 
    return 0;
}