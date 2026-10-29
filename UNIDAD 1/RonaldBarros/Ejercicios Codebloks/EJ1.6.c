#include <stdio.h>

int main()
{
    float altura, suma = 0, mayor, menor;
    int contador = 0;

    printf("Ingrese una altura (negativo para terminar): ");
    scanf("%f", &altura);

    while (altura >= 0) {
        if (contador == 0) {
            mayor = altura;
            menor = altura;
        } else {
            if (altura > mayor) mayor = altura;
            if (altura < menor) menor = altura;
        }

        suma = suma + altura;
        contador++;

        printf("Ingrese otra altura: ");
        scanf("%f", &altura);
    }

    if (contador > 0) {
        printf("Promedio: %f\n", suma / contador);
        printf("Altura mayor: %f\n", mayor);
        printf("Altura menor: %f\n", menor);
    } else {
        printf("No se ingresaron alturas.\n");
    }

    return 0;
}
