#include <stdio.h>

int main() {
    int secreto = 85;
    int contador = 0;
    int intento;

    do {
        printf("Introduce tu intento: ");
        scanf("%d", &intento);
        contador = contador + 1;

        if (intento < secreto) {
            printf("Más alto\n");
        } else {

            if (intento > secreto) {
                printf("Más bajo\n");
            } else {
                printf("Acertaste\n");
            }
        }
    } while (intento != secreto);

    printf("Intentos realizados: %d\n", contador);

    return 0;
}
