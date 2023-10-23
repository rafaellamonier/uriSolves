#include <stdio.h>
#define PI 3.14159 

int main () {
    // area = π . raio2

    double raio, result;

    scanf("%lf", &raio);

    result = PI * (raio * raio);
    
    // template output
    printf("A=%.4lf\n", result);

    return 0;
}
