#include <stdio.h>

int main() {
    int mayor = 0, segundo = 0, cantidad = 0, n;

    printf("Introduce un numero (0 para terminar): ");
    scanf("%d", &n);

    while (n != 0) {
        cantidad = cantidad + 1;

        if (n > mayor) {
            segundo = mayor;
            mayor = n;
        } else {

            if (n < mayor && n > segundo) {
                segundo = n;
            }
        }

        printf("Introduce otro numero (0 para terminar): ");
        scanf("%d", &n);
    }

    if (cantidad < 2) {
        printf("Hay menos de dos valores\n");
    } else {

        if (segundo == 0) {
            printf("No hay mayor distinto\n");
        } else {
            printf("Mayor: %d\n", mayor);
            printf("Segundo mayor: %d\n", segundo);
        }
    }
    return 0;
}
