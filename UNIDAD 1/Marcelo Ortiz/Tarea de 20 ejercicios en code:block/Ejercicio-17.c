#include <stdio.h>

int main() {
    int n, binario = 0, posicion = 1, resto;


    printf("Introduce un numero decimal: ");
    scanf("%d", &n);


    while (n > 0) {
        resto = n % 2;
        binario = binario + resto * posicion;
        posicion = posicion * 10;
        n = n / 2;
    }


    printf("El numero en binario es: %d\n", binario);

    return 0;
}
