#include <stdio.h>
#include <math.h>
 
#define PI 3.14159

int main() {
    
    double r = 0, volume = 0;
    scanf("%lf", &r);

    volume = (4.0/3.0) * PI * pow(r, 3);

    printf("VOLUME = %.3lf\n", volume); 

    return 0;
}