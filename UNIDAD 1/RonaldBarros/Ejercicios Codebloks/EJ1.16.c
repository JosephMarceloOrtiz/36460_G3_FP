#include <stdio.h>

int main()
{
    int n, suma = 0;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        for (int d = 1; d <= n / 2; d++) {
            if (n % d == 0) {
                suma = suma + d;
            }
        }

        if (suma == n) {
            printf("El numero es perfecto.\n");
        } else {
            printf("El numero no es perfecto.\n");
        }
    }

    return 0;
}
