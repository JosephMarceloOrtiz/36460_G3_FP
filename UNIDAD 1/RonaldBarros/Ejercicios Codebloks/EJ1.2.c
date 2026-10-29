#include <stdio.h>
#include <math.h>

int main() {
    float n, resultado;

    printf("Ingrese un numero: ");
    scanf("%f", &n);

    resultado = pow(fabs(n), 3);

    printf("El cubo del valor absoluto es: %f\n", resultado);

    return 0;
}
