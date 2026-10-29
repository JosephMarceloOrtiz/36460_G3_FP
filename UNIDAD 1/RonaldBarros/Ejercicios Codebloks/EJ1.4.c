#include <stdio.h>

int main()
{
    float x;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    if (x >= 0 && x <= 10) {
        printf("El numero esta dentro del intervalo.\n");
    } else {
        printf("El numero esta fuera del intervalo.\n");
    }

    return 0;
}
