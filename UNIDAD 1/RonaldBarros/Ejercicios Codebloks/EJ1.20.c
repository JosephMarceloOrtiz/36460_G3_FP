#include <stdio.h>

int main() {
    int secreto = 63;
    int intento, contador = 0;

    printf("Adivina el numero entre 1 y 100.\n");

    do {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);

        contador++;

        if (intento < secreto) {
            printf("Mas alto.\n");
        } else if (intento > secreto) {
            printf("Mas bajo.\n");
        } else {
            printf("Acertaste.\n");
        }

    } while (intento != secreto);

    printf("Intentos realizados: %d\n", contador);

    return 0;
}
