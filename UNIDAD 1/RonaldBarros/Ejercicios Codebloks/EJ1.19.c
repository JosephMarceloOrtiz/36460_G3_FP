#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, mayor = 0, segundo = 0;
    int cantidad = 0;
    bool hayMayor = false, haySegundo = false;

    printf("Ingrese un numero positivo (0 para terminar): ");
    scanf("%d", &n);

    while (n != 0) {
        if (n < 0) {
            printf("Ingrese solo numeros positivos.\n");
        } else {
            cantidad++;

            if (!hayMayor) {
                mayor = n;
                hayMayor = true;
            } else if (n >= mayor) {
                segundo = mayor;
                haySegundo = true;
                mayor = n;
            } else if (!haySegundo || n > segundo) {
                segundo = n;
                haySegundo = true;
            }
        }

        printf("Ingrese otro numero (0 para terminar): ");
        scanf("%d", &n);
    }

    if (cantidad < 2) {
        printf("Se necesitan al menos dos valores.\n");
    } else {
        printf("Mayor: %d\n", mayor);
        printf("Segundo mayor: %d\n", segundo);
    }

    return 0;
}
