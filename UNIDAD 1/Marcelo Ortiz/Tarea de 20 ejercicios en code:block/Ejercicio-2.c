#include <stdio.h>

int main() {

    float x, res;


    printf("Ingrese el valor de x: ");
    scanf("%f", &x);

    res = pow(fabs(x), 3);

    printf("El resultado es: %.2f\n", res);

    return 0;
}
