#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El numero debe ser no negativo.\n");
    } else {
        i = 1;

        while (i <= n) {
            factorial = factorial * i;
            i = i + 1;
        }

        printf("El factorial es: %llu\n", factorial);
    }

    return 0;
}
