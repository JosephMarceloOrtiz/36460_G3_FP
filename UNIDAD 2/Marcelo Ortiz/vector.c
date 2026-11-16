#include <stdio.h>
//Es para que detecte que estamos buscando 
void imprimirVector(int vec[], int tam) {
    printf("Valores imprimidos del vector: \n");

    for (int i = 1; i <= tam; i++) {
        printf("Posicion [%d]: %d\n", i, vec[i]);
    }
}
//Es para incertar el número total de datos 
int main() {

    int n, i;

    printf("Cuantos datos ingresara: ");
    scanf("%d", &n);

    int vector[n];
// incrementa la fila 
    for (i = 1; i <= n; i++) {

        do {
            printf("Ingrese valor %d: ", i);
            scanf("%d", &vector[i]);

            if (vector[i] <= 0) {
                printf("Advertencia: El valor no puede ser negativo y cero");
            }
// do while para evitar ingresar valores menores o iguales a cero.
        } while (vector[i] <= 0);
    }

    imprimirVector(vector, n);

    return 0;
}