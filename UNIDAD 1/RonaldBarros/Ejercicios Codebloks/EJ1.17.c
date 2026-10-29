#include <stdio.h>

void mostrarBinario(int n) {
    if (n > 1) {
        mostrarBinario(n / 2);
    }

    printf("%d", n % 2);
}

int main() {
    int n;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        printf("El numero en binario es: ");
        mostrarBinario(n);
        printf("\n");
    }

    return 0;
}
